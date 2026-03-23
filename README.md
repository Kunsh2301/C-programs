# C-Programs Repository

A complete, beginner-friendly collection of C programs designed for learning, practice, and quick reference.

##  Repository Overview

- Language: C
- Audience: Beginners and intermediate learners
- Purpose:
  - practice core C concepts
  - learn standard IO, control flow, arrays, pointers, functions, recursion
  - explore problem-solving patterns

## 📁 Folder Structure

Each folder contains focused exercises grouped by topic.

- `Basic_Programs`
  - Simple arithmetic, input/output, conditions, and utility programs
- `Patterns`
  - Pyramid shapes, diamonds, pattern printing (stars/numbers/characters)
- `Number_Problems`
  - Armstrong, prime/magic/happy numbers, palindrome, special number checks
- `Array_Problems`
  - Array operations, sorting, searching, matrix math, statistics (avg/min/max)
- `String_Problems`
  - String manipulation: concatenate, compare, reverse, palindrome, case checks
- `Pointer_Problems`
  - Pointer arithmetic, function pointers, array pointers, memory operations
- `Function_Problems`
  - Modular programs, reusable functions, recursion, helper utilities
- `Loop_Problems`
  - `for`, `while`, `do while` loops, sums, factorial, series
- `Math_Problems`
  - Mathematical algorithms: factorial, Fibonacci, GCD, LCM, combinatorics
- `Geometry`
  - Geometry formulas: area and perimeter calculations

## 🛠️ Local Setup and Compile

1. Install GCC/MinGW on Windows or `gcc` on Linux/Mac.
2. Navigate into the folder containing your target `.c` file.
3. Compile with:

```bash
gcc "<path>/filename.c" -o filename.exe
```

4. Run:

- On Windows:
  ```bash
  .\filename.exe
  ```
- On Linux/Mac:
  ```bash
  ./filename.exe
  ```

## 🔍 Testing and Validation

- Add test inputs to verify output; use command line input or hard-coded sample values.
- For automated testing, integrate with `CUnit` or write custom scripts using input redirection:

```bash
./filename.exe < test_input.txt > actual_output.txt
```

## 💡 Contribution Guide

1. Create a new issue for feature requests or bug fixes.
2. Fork the repository and create a topic branch.
3. Add / improve a C program in the proper category.
4. Name files clearly and keep comments concise.
5. Submit a pull request with:
   - Summary
   - What changed
   - How to test

## 📘 Best Practices

- Keep code modular with helper functions.
- Use meaningful variable names and comments.
- Make programs robust with input validation.
- Avoid fixed-size arrays without bounds checks.

## 🧾 Useful Commands

- Clean previous binaries:
  ```bash
  del *.exe  # Windows
  rm *.out   # Linux/Mac
  ```
- Compile with warnings:
  ```bash
  gcc -Wall -Wextra -std=c11 filename.c -o filename
  ```