# LeetCode 001: Two Sum

## 題目連結
[https://leetcode.com/problems/two-sum](https://leetcode.com/problems/two-sum)

## 題目說明
給定一個整數陣列 `nums` 和一個目標值 `target`，請找出兩個數，使它們的總和為目標值，並回傳它們的索引。

## 解題思路
- 使用哈希表紀錄歷史出現的數字
- 每走訪一個數字，就看 `target - nums[i]` 是否已經出現過

## C++ 程式碼
見 [001_two_sum.cpp](001_two_sum.cpp)
