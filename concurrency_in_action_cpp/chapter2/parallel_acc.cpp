//
// Created by DANG BA MINH on 17/06/2024.
//

#include <iostream>
#include <vector>
#include <thread>
#include <iterator>
#include <numeric>

using namespace std;

template<typename Iterator, typename T>
void accumulate_block(Iterator first, Iterator last, T& result) {
    result = accumulate(first, last, result);
}
//struct accumulate_block {
//    void operator()(Iterator first, Iterator last, T& result) {
//        result = accumulate(first, last, result);
//    }
//};

template<typename Iterator, typename T>
T parallel_accumulate(Iterator first, Iterator last, T init) {
    unsigned long const length = distance(first, last);
    if (length == 0) return init;

    unsigned long const min_per_thread = 5;
    unsigned long const max_threads = (length + min_per_thread - 1) / min_per_thread;
    unsigned long const max_hardware_threads = thread::hardware_concurrency();
    unsigned long const num_threads = min(max_threads, max_hardware_threads != 0 ? max_hardware_threads : 2);
    vector<T> results(num_threads);
    vector<thread> threads(num_threads - 1);
    unsigned long const block_size = length / num_threads;
    Iterator block_start = first;
    for (int i = 0; i < threads.size(); i++) {
        Iterator block_end = block_start;
        advance(block_end, block_size);
        cout << "block_start: " << *block_start << " block_end: " << *block_end << "\n";
        threads[i] = thread(accumulate_block<Iterator, T>, block_start, block_end, ref(results[i]));
        block_start = block_end;
    }
    for (auto& thread: threads) {
        thread.join();
    }
    accumulate_block<Iterator, T>(block_start, last, results[num_threads - 1]);
    return accumulate(results.begin(), results.end(), init);
}

int main() {
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    long result = parallel_accumulate(v.begin(), v.end(), 0);
    assert(result == 66);
    return 0;
}
