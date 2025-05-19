#include "mixer.h"

auto wacky_colour(paint p1, paint p2) -> std::optional<paint> {
    if (p1 == paint::RED and p2 == paint::GREEN) {
        return paint::YELLOW;
    } else if (p1 == paint::RED and p2 == paint::BLUE) {
        return paint::MAGENTA;
    } else if (p1 == paint::GREEN and p2 == paint::BLUE) {
        return paint::CYAN;
    } else if (p1 == paint::YELLOW and p2 == paint::MAGENTA) {
        return paint::BROWN;
    } else if (p1 == paint::YELLOW and p2 == paint::CYAN) {
        return paint::BROWN;
    } else if (p1 == paint::CYAN and p2 == paint::MAGENTA) {
        return paint::BROWN;
    } else if (p1 == paint::BROWN and p2 == paint::BROWN) {
        return  paint::BROWN;
    } else {
        return std::nullopt;
    }
};


auto mix(const std::vector<paint>& paints, std::function<mixer_fn> fn) -> std::optional<paint> {
    auto size = paints.size(); 
    if (size <= 1) return std::nullopt;
    auto new_paint = std::optional<paint>{paints.front()};
    for (auto i = 1u; i < paints.size() && new_paint.has_value(); ++i) {
        new_paint = fn(*new_paint, paints[i]);
    }

    return new_paint;
};

