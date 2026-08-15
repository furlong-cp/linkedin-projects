# PerfOracle V1 — Project Structure

| File / Folder | Why You Need It |
|---|---|
| `src/` | Contains **PerfOracle itself** |
| `main.cpp` | Starts the program and controls the overall flow |
| `benchmark.cpp` | Runs the user's C++ code and measures its execution time |
| `benchmark.hpp` | Tells other files what functions `benchmark.cpp` provides |
| `statistics.cpp` | Calculates average, minimum, maximum, etc. |
| `statistics.hpp` | Tells other files what statistics functions are available |
| `benchmarks/` | Contains **C++ programs that you want PerfOracle to test** |
| `example.cpp` | Your first test program |
| `results/` | Stores performance results |
| `baseline.txt` | Stores the old performance number to compare against |
| `CMakeLists.txt` | Tells CMake how to compile the project |
| `README.md` | Explains what PerfOracle is and how to use it |
