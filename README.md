# LeetCode Solutions by ganganiangao

## 🧠 LeetCode Study Plan 筆記區

本筆記區整理三大類演算法主題：
* Dynamic Programming
* Graph Theory
* Binary Search

每類主題依據常見題型 (Pattern) 分區，補充對應解題技巧與練習進度。

---

### 📘 1. Dynamic Programming (DP)

| Pattern                | 代表題目                                                        | 筆記區 Link                     |
| ---------------------- | ----------------------------------------------------------- | ---------------------------- |
|  Fibonacci Style     | \[70. Climbing Stairs], \[198. House Robber]                | [點我前往](#dp--fibonacci-style) |
|  2D DP / Matrix      | \[64. Minimum Path Sum], \[221. Maximal Square]             | [點我前往](#dp--2d-matrix)       |
|  On Strings          | \[516. Longest Palindromic Subsequence], \[139. Word Break] | [點我前往](#dp--on-strings)      |
|  Subsequence Related | \[300. LIS], \[1143. LCS]                                   | [點我前往](#dp--subsequence)     |
|  Knapsack Style      | \[0/1 Knapsack], \[Subset Sum]                              | [點我前往](#dp--knapsack)        |

---

## 📝 筆記區

### 🔹 DP — Fibonacci Style

```md
- 遞推關係通常為 dp[i] = dp[i-1] + dp[i-2]
- 需注意初始條件與空間優化 (可壓縮成兩個變數)
- 例題：[70. Climbing Stairs]：單純加總；[198. House Robber]：不能連續選
```

### 🔹 DP — 2D Matrix

```md
- 使用 dp[i][j] 儲存前 i 行 j 列的最佳解
- 常搭配 grid 題目與方向走法
- 注意初始化與邊界處理
```

### 🔹 DP — On Strings

```md
- 通常是比較字元之間的關係，例如回文、字串切割
- dp[i][j] 代表 s[i...j] 這段是否為有效解
- 例題：[139. Word Break] 要建字典與剪枝技巧
```

---

