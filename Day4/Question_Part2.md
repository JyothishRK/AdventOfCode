# Day 4: Ceres Search — Part 2  

---

## Task: X-MAS Pattern Search  

The task now involves finding patterns in the shape of an **X**, where:  

- The **X** consists of two **MAS** patterns crossing in an "X" shape.
- Each **MAS** can be written forwards or backwards.  

---

### Example of X-MAS  

#### Valid X-MAS Pattern:  

```
M.S  
.A.  
M.S  
```  

Here, the **MAS** sequences are:  

1. Top-left to bottom-right diagonal (MAS forwards).  
2. Bottom-left to top-right diagonal (MAS forwards).  

---

### Example Puzzle  

#### Input:  

```
MMMSXXMASM  
MSAMXMSMSA  
AMXSXMAAMM  
MSAMASMSMX  
XMASAMXAMM  
XXAMMXXAMA  
SMSMSASXSS  
SAXAMASAAA  
MAMMMXMMMM  
MXMXAXMASX  
```  

#### Highlighted Puzzle:  

Here, only **X-MAS** patterns are shown, while irrelevant characters are replaced with dots (`.`):  

```
.M.S......  
..A..MSMS.  
.M.S.MAA..  
..A.ASMSM.  
.M.S.M....  
..........  
S.S.S.S.S.  
.A.A.A.A..  
M.M.M.M.M.  
..........  
```  

---

### Total Count  

In this example, **X-MAS** appears a total of **9 times**.  

---

## Task  

Count all occurrences of **X-MAS** patterns in the provided word search. Ensure to account for both forward and backward orientations of each **MAS**.  

What is the total count?  