# PerfOracle — Version 01

PerfOracle is a simple C++ performance regression detector.

## What it does

PerfOracle:

1. Runs a benchmark multiple times.
2. Measures execution time.
3. Calculates basic statistics.
4. Compares the current result with a baseline.
5. Reports whether performance has regressed.

## Version 01

Version 01 focuses on the basic benchmarking pipeline:

```text
Benchmark
    ↓
Run multiple times
    ↓
Measure execution time
    ↓
Calculate statistics
    ↓
Compare with baseline
    ↓
PASS / REGRESSION
