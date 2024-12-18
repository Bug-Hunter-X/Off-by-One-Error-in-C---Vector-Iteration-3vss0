# Off-by-One Error in C++ Vector Iteration

This repository demonstrates a common off-by-one error in C++ when iterating over a `std::vector`.  The provided code attempts to access an element beyond the valid range of the vector, leading to undefined behavior, typically a program crash.

The `bug.cpp` file contains the erroneous code, while `bugSolution.cpp` provides the corrected version.

This example highlights the importance of careful attention to loop boundary conditions when working with vectors and other dynamic data structures.