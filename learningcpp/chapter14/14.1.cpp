//
// Created by DANG BA MINH on 30/04/2024.
//
#include <iostream>
#include <string_view>
#include <string>
using namespace std;
enum AnimalType
{
    cat,
    dog,
    chicken,
};

constexpr std::string_view animalName(AnimalType type)
{
    switch (type)
    {
        case cat: return "cat";
        case dog: return "dog";
        case chicken: return "chicken";
        default:  return "";
    }
}

constexpr int numLegs(AnimalType type)
{
    switch (type)
    {
        case cat: return 4;
        case dog: return 4;
        case chicken: return 2;
        default:  return 0;
    }
}


int main()
{
    string name;
    cin >> name;
    AnimalType animal;
    if (name == "cat") {
        animal = AnimalType::cat;
    } else {
        animal = AnimalType::dog;

    }

    std::cout << "A " << animalName(animal) << " has " << numLegs(animal) << " legs\n";

    return 0;
}