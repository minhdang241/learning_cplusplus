#include <iostream>
#include <thread>
#include <unistd.h>

class scoped_thread {
private:
    std::thread t;
public:
    explicit scoped_thread(std::thread t_): t{std::move(t_)} {
        if(!t.joinable()) {
            throw std::logic_error("No thread");
        }
    }
    ~scoped_thread() {
        t.join();
    }
    scoped_thread(scoped_thread const&) = delete;
    scoped_thread& operator=(scoped_thread const&) = delete;
};

class thread_guard {
private:
    std::thread& t;
public:
    explicit thread_guard(std::thread& thread): t{thread} {
    }
    ~thread_guard() {
        std::cout << "Deconstructor: join threads\n";
        if (t.joinable()) {
            t.join();
        }
    }
    thread_guard(const thread_guard&) = delete;
    thread_guard& operator=(const thread_guard&) = delete;
};

class Sleeper{
private:
    int& i;
public:
    Sleeper(int& i_):i{i_}{};
    void operator() (int k){
        for (unsigned int j= 0; j <= 5; ++j){
            std::this_thread::sleep_for(std::chrono::milliseconds(100));
            i += k;
        }
        std::cout << std::this_thread::get_id() << std::endl;
    }
};

void inc(int& v) {
    v++;
}
void inc2(int v) {
    v++;
}
int main() {
//    std::cout << "Hello, There\n";
//    std::cout << std::thread::hardware_concurrency() << std::endl;
//    std::thread t([]{std::cout << "Hello, World!";});
//    thread_guard g(t);
//    int val = 1000;
//    std::thread t2(Sleeper(val), 5);
//    t2.detach();
//    std::cout << val << std::endl;
    int val2 = 0;
    std::thread t(inc, std::ref(val2));
    t.join();
    assert(val2 == 1);
    std::thread t2(inc2, val2);
    t2.join();
    assert(val2 == 1);
    return 0;
}
