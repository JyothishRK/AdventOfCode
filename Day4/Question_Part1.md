# Day 4: Ceres Search  

---

## Part 1: Word Search  

The task involves finding **all occurrences** of the word **XMAS** in a given word search puzzle.  

---

### Word Search Rules  

1. Words can appear:  
   - Horizontally (left-to-right or right-to-left)  
   - Vertically (top-to-bottom or bottom-to-top)  
   - Diagonally (any of the 4 diagonal directions)  
   - Overlapping other words  

2. The goal is to count **every occurrence** of the word **XMAS**, irrespective of its orientation.  

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

---

#### Highlighted Puzzle:  

Only letters forming **XMAS** are shown, while irrelevant characters are replaced with dots (`.`):  

```
....XXMAS.  
.SAMXMS...  
...S..A...  
..A.A.MS.X  
XMASAMX.MM  
X.....XA.A  
S.S.S.S.SS  
.A.A.A.A.A  
..M.M.M.MM  
.X.X.XMASX  
```  

---

### Total Count  

In this example, **XMAS** appears a total of **18 times**.  

---

## Task  

Given the word search provided by the Elf, count **all occurrences** of **XMAS**, considering every possible orientation.  

What is the total count?  