#include "statistics.hpp"

#include <algorithm>
#include <numeric>

double calculateAverage(const std::vector<double>& values) {
    if (values.empty()) {
        return 0.0;
    }

    double sum = std::accumulate(values.begin(), values.end(), 0.0);

    return sum / values.size();
}

double calculateMinimum(const std::vector<double>& values) {
    if (values.empty()) {
        return 0.0;
    }

    return *std::min_element(values.begin(), values.end());
}

double calculateMaximum(const std::vector<double>& values) {
    if (values.empty()) {
        return 0.0;
    }

    return *std::max_element(values.begin(), values.end());
}
