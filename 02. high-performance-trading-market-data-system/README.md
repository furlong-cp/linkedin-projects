
---

### 2. `high-performance-trading-market-data-system/README.md`

```md
# High-Performance Trading & Market-Data System

A C++ low-latency market-data pipeline focused on lock-free communication, efficient serialization, memory management, and networking.

## Features

- Market-data ingestion
- Binary serialization
- Lock-free queues
- Memory pools
- Network transport
- Event replay
- Latency & throughput benchmarking

## Tech Stack

- C++20
- Linux
- POSIX Sockets
- CMake
- GoogleTest
- Google Benchmark

## Architecture

```text
Market Data
    ↓
Network Layer
    ↓
Decoder
    ↓
Lock-Free Queue
    ↓
Market State
    ↓
Consumers
