# PerfOracle — My 8-Month Roadmap

> **Goal:** Build a C++ performance-analysis tool that can detect, measure, and explain performance regressions using benchmarking, profiling, and hardware-performance data.

---

## Phase 1 — Build My C++ Foundation
**August 2026**

- [ ] Strengthen C++ fundamentals
- [ ] Master STL and common data structures
- [ ] Understand pointers, references, memory, and object lifetime
- [ ] Learn compilation with GCC/Clang
- [ ] Learn CMake
- [ ] Set up Git/GitHub workflow

**Milestone:** Write and compile clean C++ projects without relying on tutorials.

---

## Phase 2 — Understand What Makes C++ Fast
**September 2026**

- [ ] Stack vs heap
- [ ] Dynamic memory allocation
- [ ] Copy vs move semantics
- [ ] Contiguous vs non-contiguous memory
- [ ] Cache locality
- [ ] Compiler optimizations
- [ ] `-O0`, `-O2`, `-O3`
- [ ] Learn to reason about performance before benchmarking

**Milestone:** Explain why two functionally identical C++ implementations can have different performance.

---

## Phase 3 — Learn Computer Architecture
**October 2026**

- [ ] CPU registers
- [ ] CPU pipelines
- [ ] Out-of-order execution
- [ ] Instruction-level parallelism
- [ ] L1/L2/L3 caches
- [ ] Cache misses
- [ ] Branch prediction
- [ ] Branch misprediction
- [ ] SIMD fundamentals
- [ ] Memory hierarchy

**Milestone:** Understand what my C++ code is making the CPU actually do.

---

## Phase 4 — Learn Benchmarking & Profiling
**November 2026**

- [ ] Learn reliable benchmarking
- [ ] Warm-up and repeated measurements
- [ ] Mean / median / p95 / p99
- [ ] Understand variance and outliers
- [ ] Google Benchmark
- [ ] Linux `perf`
- [ ] `perf stat`
- [ ] `perf record`
- [ ] `perf report`
- [ ] Flame graphs

**Milestone:** Find a real bottleneck in a C++ program using profiling instead of guessing.

---

## Phase 5 — Hardware Performance Counters
**December 2026**

- [ ] CPU cycles
- [ ] Instructions
- [ ] Cache references
- [ ] Cache misses
- [ ] Branches
- [ ] Branch misses
- [ ] Instructions per cycle
- [ ] Understand hardware-counter limitations
- [ ] Build controlled microbenchmarks

### Experiments

- [ ] Sequential vs random memory access
- [ ] Predictable vs unpredictable branches
- [ ] Array of Structures vs Structure of Arrays
- [ ] Heap allocation vs preallocation
- [ ] `-O0` vs `-O2` vs `-O3`

**Milestone:** Explain *why* a measured performance difference occurred.

---

# Phase 6 — Build PerfOracle v1
**January 2027**

## Benchmark Engine

- [ ] Accept benchmark targets
- [ ] Execute repeated runs
- [ ] Collect timing data
- [ ] Calculate statistical summaries
- [ ] Detect significant regressions

Example:

```text
Version A: 102 ns/op
Version B: 137 ns/op

Regression: +34.3%
```
**Milestone:** PerfOracle can reliably detect a performance regression.

# Phase 7 — Make It Intelligent
**February 2027**

## Hardware Analysis

- [ ] Collect hardware counters automatically
- [ ] Compare counter changes
- [ ] Detect cache-related regressions
- [ ] Detect branch-related regressions
- [ ] Detect instruction-count regressions
- [ ] Generate automated reports

Example:

```text
Performance Regression: +34%

Cache misses:       +198%
Branch misses:        +9%
Instructions:         +8%
```
Primary suspected cause:
Memory-access behavior

## Git Integration

- [ ] Integrate Git
- [ ] Compare commits
- [ ] Detect the first regressing commit
- [ ] Experiment with automated `git bisect`

**Milestone:** PerfOracle can identify both **that** performance regressed and **where to investigate**.

---

# Phase 8 — Research, Optimize & Publish

**March 2027**

- [ ] Optimize PerfOracle itself
- [ ] Test on multiple workloads
- [ ] Create reproducible experiments
- [ ] Measure accuracy of regression detection
- [ ] Document limitations
- [ ] Create benchmark dataset
- [ ] Generate performance graphs
- [ ] Write technical report
- [ ] Clean GitHub repository
- [ ] Publish final release

**Final milestone:**

> **Given two versions of a C++ program, PerfOracle measures the regression and uses profiling/hardware data to identify the most likely performance bottleneck.**

---

# Final Architecture

```text
                ┌──────────────────┐
                │   C++ Program    │
                └────────┬─────────┘
                         ↓
                ┌──────────────────┐
                │ Benchmark Engine │
                └────────┬─────────┘
                         ↓
              ┌──────────────────────┐
              │ Timing + Statistics  │
              └──────────┬───────────┘
                         ↓
              ┌──────────────────────┐
              │ Hardware Counters    │
              └──────────┬───────────┘
                         ↓
              ┌──────────────────────┐
              │ Regression Analyzer  │
              └──────────┬───────────┘
                         ↓
              ┌──────────────────────┐
              │ Bottleneck Diagnosis │
              └──────────┬───────────┘
                         ↓
                  Performance Report

