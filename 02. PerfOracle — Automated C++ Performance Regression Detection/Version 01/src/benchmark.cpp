#include "benchmark.hpp"

#include <chrono>

long long exampleBenchmark();

std::vector<double> runBenchmark(int runs) {
    std::vector<double> results;

    results.reserve(runs);

    for (int i = 0; i < runs; ++i) {
        auto start = std::chrono::high_resolution_clock::now();

        volatile long long result = exampleBenchmark();
        (void)result;

        auto end = std::chrono::high_resolution_clock::now();

        double time =
            std::chrono::duration<double, std::micro>(end - start).count();

        results.push_back(time);
    }

    return results;
}
