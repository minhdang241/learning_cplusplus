//
// Created by DANG BA MINH on 14/06/2024.
//

#include <iostream>
#include <thread>
#include <vector>


struct Account {
    int balance{100};
};

void add_money(Account &to, int amout) {
    to.balance += amout;
}


int main() {
    Account account;
    std::vector<std::thread> vecThreads(100);
    for (auto& thr: vecThreads) {
        thr = std::thread(add_money, std::ref(account), 50);
    }

    for (auto& thr: vecThreads) {
        thr.join();
    }
    std::cout <<  account.balance << std::endl;

    return 0;
}