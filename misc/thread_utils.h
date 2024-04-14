//
// Created by DANG BA MINH on 14/04/2024.
//

#ifndef LEARNING_CPLUSCPLUS_THREAD_UTILS_H
#define LEARNING_CPLUSCPLUS_THREAD_UTILS_H

#include <iostream>
#include <atomic>
#include <thread>
#include <unistd.h>
#include <sys/syscall.h>

template<typename T, typename... A>
inline auto createAndStartThread(int core_id, const std::string &name, T &&func, A &&... args) {

    std::atomic<bool> running(false), failed(false);

}

#endif //LEARNING_CPLUSCPLUS_THREAD_UTILS_H