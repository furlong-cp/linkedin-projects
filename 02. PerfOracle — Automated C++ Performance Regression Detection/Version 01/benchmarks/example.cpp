#include <iostream>

long long exampleBenchmark() {
    long long sum = 0;

    for (int i = 0; i < 1000000; ++i) {
        sum += i;
    }

    return sum;
}
