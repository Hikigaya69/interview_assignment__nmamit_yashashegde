# interview_assignment__nmamit_yashashegde

## Answer for DSA Problems (Belc - Task 2)

## Overview

This repository contains C++ solutions to two fundamental array problems commonly asked in coding interviews. Each problem includes a solution implementation and corresponding test cases.

## Problems Covered

### Problem 1: Detect Duplicates in an Integer Array

**Description**:  
Given an array of integers, determine if any number appears more than once.

- **Input**: A vector of integers  
- **Output**: Return `true` if any value appears at least twice, otherwise return `false`.

**Approach**:  
Uses an `unordered_set` to track seen elements. Time complexity is **O(n)**, space complexity is **O(n)**.

---

### Problem 2: Move Zeroes to the End

**Description**:  
Given an array of integers, move all zeroes to the end without changing the order of non-zero elements.

- **Input**: A vector of integers  
- **Output**: The modified array (in-place)

**Approach**:  
Uses a two-pointer technique to shift non-zero values forward and push zeroes to the back. Time complexity is **O(n)**, space complexity is **O(1)**.

---

## File Structure

```
.
├── problem1.cpp         // Contains containsDuplicate() function
├── problem1_test.cpp    // Runs test cases for Problem 1
├── problem2.cpp         // Contains moveZero() function
├── problem2_test.cpp    // Runs test cases for Problem 2
├── README.md            // This documentation file
```

---


## How to Compile & Run

Use a C++ compiler like `g++`. Run the following commands from the terminal:

### To test Problem 1

```bash
g++ problem1_test.cpp -o problem1_test
./problem1_test
```

### To test Problem 1

```bash
g++ problem2_test.cpp -o problem2_test
./problem2_test
```

