# LeetCode 215 — Kth Largest Element in an Array

## Attempt 1: Bubble Sort

* **Approach:** Sort the entire array in descending order.
* **Time Complexity:** O(n²)
* **Result:** Time Limit Exceeded (38/47 test cases passed).

## Attempt 2: Partial Selection Sort

* **Approach:** Find the maximum element and move it to the next position, repeating k times.
* **Time Complexity:** O(nk)
* **Result:** Time Limit Exceeded (40/47 test cases passed).

## What I Learned

* How bubble sort works.
* How selection sort can find the largest elements first.
* Why an algorithm can be logically correct but still exceed the time limit.
* The importance of time complexity.

## Next Goal

Implement a more efficient solution and compare its performance with both attempts.
