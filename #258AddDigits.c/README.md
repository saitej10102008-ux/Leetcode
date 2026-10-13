# LeetCode 258 — Add Digits

## Problem

Given an integer `num`, repeatedly add all its digits until the result has only one digit. Return the final single-digit number.

**LeetCode:** [258. Add Digits](https://leetcode.com/problems/add-digits/)

**Difficulty:** Easy
**Language:** C

## Example

**Input**

```text
num = 38
```

**Output**

```text
2
```

**Explanation**

* `3 + 8 = 11`
* `1 + 1 = 2`

## Approach 1: Iterative Digit Sum

Extract each digit using `% 10`, remove it using `/ 10`, and add the digits. Repeat until the sum contains only one digit.

* **Time Complexity:** `O(log n)` for a fixed number of digit-summing rounds; more precisely, `O(log n × log log n)` as a function of the input magnitude.
* **Space Complexity:** `O(1)`

## Approach 2: Mathematical Formula

Use the digital-root property of modulo 9:

* If `num == 0`, return `0`.
* If `num` is divisible by `9`, return `9` for positive inputs.
* Otherwise, return `num % 9`.

```c
int addDigits(int num) {
    if (num == 0) return 0;
    if (num % 9 == 0) return 9;
    return num % 9;
}
```

* **Time Complexity:** `O(1)`
* **Space Complexity:** `O(1)`

## What I Learned

* Extracting digits using `%` and `/`.
* Using loops to solve problems iteratively.
* Recognizing mathematical patterns.
* Optimizing a solution from repeated digit processing to constant time.

## Result

**Status:** Accepted ✅

The mathematical approach is more efficient because it avoids loops and calculates the answer directly.
