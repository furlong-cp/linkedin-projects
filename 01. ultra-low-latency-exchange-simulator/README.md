# Ultra-Low-Latency Exchange Simulator

A high-performance C++ matching engine and limit order book designed to explore low-latency trading systems.

## Features

- Limit & market orders
- Price-time priority matching
- Order cancellation
- Partial fills
- Deterministic order replay
- Latency & throughput benchmarking
- Multithreaded architecture

## Tech Stack

- C++20
- CMake
- Linux
- GoogleTest
- Google Benchmark

## Architecture

```text
Order Feed
    ↓
Order Validation
    ↓
Matching Engine
    ↓
Limit Order Book
    ↓
Execution Reports
