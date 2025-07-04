# LeetCode Solutions by ganganiangao

## 🧠 LeetCode Study Plan 筆記區

本筆記區整理三大類演算法主題：
* Dynamic Programming
* Graph Theory
* Binary Search

每類主題依據常見題型 (Pattern) 分區，補充對應解題技巧與練習進度。

---

### 📘 1. Dynamic Programming (DP)

| Pattern 🧩                            | 代表題目                                                                                 | 筆記區 Link                         |
| ------------------------------------- | ------------------------------------------------------------------------------------ | -------------------------------- |
| ➊ Fibonacci Style                     | \[70. Climbing Stairs], \[198. House Robber]                                         | [點我前往](#dp--fibonacci-style)     |
| ➋ Matrix                              | \[64. Minimum Path Sum], \[221. Maximal Square]                                      | [點我前往](#dp--matrix)              |
| ➌ On Strings                          | \[516. Longest Palindromic Subsequence], \[139. Word Break]                          | [點我前往](#dp--on-strings)          |
| ➍ Longest Increasing Subsequence      | \[300. LIS], \[674. Longest Continuous Increasing Subsequence]                       | [點我前往](#dp--lis)                 |
| ➎ Best Time to Buy & Sell Stock / 狀態機 | \[121. Best Time to Buy and Sell Stock], \[123. Best Time to Buy and Sell Stock III] | [點我前往](#dp--stock-state-machine) |
| ➏ On Trees                            | \[337. House Robber III], \[124. Binary Tree Maximum Path Sum]                       | [點我前往](#dp--on-trees)            |
| ➐ Knapsack                            | \[416. Partition Equal Subset Sum], \[1049. Last Stone Weight II]                    | [點我前往](#dp--knapsack)            |
| ➑ General 1D                          | \[213. House Robber II], \[746. Min Cost Climbing Stairs]                            | [點我前往](#dp--general-1d)          |

---

## 📝 筆記區

<h3 id="dp-fibonacci-style">🔹 DP — Fibonacci Style</h3>


```md
- 題型特徵：
- 常見遞推公式：
- 初始條件與邊界處理：
- 常見優化技巧（如空間壓縮）：
- 例題筆記：
```

### 🔹 DP — Matrix `(#dp--matrix)`

```md
- 題型特徵：
- dp 定義與意義：
- 初始化方式：
- 移動方向與轉移公式：
- 例題筆記：
```

### 🔹 DP — On Strings `(#dp--on-strings)`

```md
- 題型特徵（如子字串、回文、字典切割）：
- dp[i][j] 代表的意義：
- 轉移條件與範例：
- 難點與注意事項：
```

### 🔹 DP — Longest Increasing Subsequence `(#dp--lis)`

```md
- 題型特徵：
- O(n^2) 與 O(n log n) 方法比較：
- 儲存什麼狀態？如何轉移？
- 常見變形題：
```

### 🔹 DP — Best Time to Buy & Sell Stock / 狀態機 `(#dp--stock-state-machine)`

```md
- 狀態定義（如：持有、不持有、賣出）：
- 狀態機轉移圖：
- 支援幾次交易的變形題分析：
- 範例題狀態拆解與對照表：
```

### 🔹 DP — On Trees `(#dp--on-trees)`

```md
- 樹上動態規劃的核心技巧（bottom-up / post-order）：
- dp 回傳多個值的做法？
- 使用 dfs 的設計模式：
- 範例分析：
```

### 🔹 DP — Knapsack `(#dp--knapsack)`

```md
- 題型特徵（01背包、完全背包、多重背包）：
- 狀態與容量定義：
- 一維滾動與遍歷方向的差別：
- 經典題目補充：
```

### 🔹 DP — General 1D `(#dp--general-1d)`

```md
- dp[i] 表示的含義與初始化：
- 轉移邏輯與判斷條件：
- 常見陷阱或 off-by-one 問題：
- 範例補充：
```

---
