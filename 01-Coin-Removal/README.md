# Task [1]: Coin Removal

## 1. Task Information

A line of coins lies on a table, each showing either heads or tails. A move removes any heads-up coin and then flips its immediate neighbors, if present. Two coins count as neighbors only if they were adjacent in the original line; removing a coin does not close the gap. Determine precisely which starting rows can be cleared and give a valid removal sequence.

![Task Image](Task-1.jpeg)

- **Required Function Signature:**
  removeCoins(n: int, coins: char[]) -> (possible: bool, flips: int[])
- **Required Algorithmic Technique:** Greedy

## 2. Problem Description

You are given a line of coins. Each coin has one of two possible states:
- **H (Heads):** The front side of the coin.
- **T (Tails):** The back side of the coin.
  
You are allowed to perform the following operation, called a **Move**:
1. Select any coin that is currently showing Heads.
2. Remove that coin from the line.
3. Flip its immediate neighbors, if they exist.
4. Repeat until all coins are removed or no valid move is possible.
   
**Important:** Neighbors are determined by their positions in the original line. Removing a coin does not make previously non-adjacent coins become neighbors.

### Required function:
- removeCoins(n, coins) -> (possible, flips)

## 3. Assumptions

## 4. Algorithm Explanation

1. Look at the available choices.
2. Select the leftmost available Heads-up coin at each step.
3. After selecting a coin, the algorithm removes it and flips its remaining original neighbors. 
4. Update the current state.
5. Repeat until all coins are removed or no removable coin remains.

This choice is safe because all coins before the leftmost Heads-up coin are Tails. Their removal depends on flipping them through the removal of neighboring coins, so the leftmost Heads-up coin can be selected first without losing a valid removal sequence.

## 5. Test Cases

At least **three test cases** must be provided to demonstrate the correctness of the solution.

### Test Case 1: [Test Case Name]

- **Purpose:** [What does this test case verify?]
- **Input:**
  ```text
  [Input]
  ```
- **Expected Output:**
  ```text
  [Expected Output]
  ```
- **Actual Output:**
  ```text
  [Actual Output]
  ```
- **Result:** [PASS / FAIL]
- **Screenshot:** [Add screenshot path or link]

### Test Case 2: [Test Case Name]

- **Purpose:** [What does this test case verify?]
- **Input:**
  ```text
  [Input]
  ```
- **Expected Output:**
  ```text
  [Expected Output]
  ```
- **Actual Output:**
  ```text
  [Actual Output]
  ```
- **Result:** [PASS / FAIL]
- **Screenshot:** [Add screenshot path or link]

### Test Case 3: [Test Case Name]

- **Purpose:** [What does this test case verify?]
- **Input:**
  ```text
  [Input]
  ```
- **Expected Output:**
  ```text
  [Expected Output]
  ```
- **Actual Output:**
  ```text
  [Actual Output]
  ```
- **Result:** [PASS / FAIL]
- **Screenshot:** [Add screenshot path or link]

## 7. Complexity Analysis

### Time Complexity

- **Complexity:** (O(...))
- **Analysis:** [Explain how the time complexity is derived. Identify the main operations and how their execution depends on the input size.]

### Space Complexity

- **Complexity:** (O(...))
- **Analysis:** [Explain the additional memory required by the algorithm and how it depends on the input size.]

