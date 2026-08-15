#include <iostream>
#include <vector>

#include "benchmark.hpp"
#include "statistics.hpp"

int main() {
    const int runs = 100;

    std::cout << "=============================\n";
    std::cout << "       PerfOracle V1\n";
    std::cout << "=============================\n\n";

    std::cout << "Running benchmark...\n";

    std::vector<double> results = runBenchmark(runs);

    double average = calculateAverage(results);
    double minimum = calculateMinimum(results);
    double maximum = calculateMaximum(results);

    std::cout << "\nResults\n";
    std::cout << "-----------------------------\n";
    std::cout << "Runs:      " << runs << '\n';
    std::cout << "Average:   " << average << " us\n";
    std::cout << "Minimum:   " << minimum << " us\n";
    std::cout << "Maximum:   " << maximum << " us\n";

    return 0;
}
