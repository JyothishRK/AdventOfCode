# Day 3: Mull It Over  

---

## Part Two: Conditional Handling  

The corrupted memory now includes **conditional instructions** to enable or disable multiplication:  

### New Instructions  

1. **`do()`**: Enables subsequent `mul` instructions.  
2. **`don't()`**: Disables subsequent `mul` instructions.  

At the **beginning of the program**, `mul` instructions are **enabled by default**. Only the most recent `do()` or `don't()` instruction determines the current state.  

---

### Example Input  

```
xmul(2,4)&mul[3,7]!^don't()_mul(5,5)+mul(32,64](mul(11,8)undo()?mul(8,5))
```  

### Step-by-Step Execution  

| **Instruction**     | **State**    | **Action**             | **Result**    |  
|---------------------|--------------|------------------------|---------------|  
| `mul(2,4)`          | Enabled      | Execute `2 * 4`        | `8`           |  
| `don't()`           | Disabled     | Disable future `mul`   | —             |  
| `mul(5,5)`          | Disabled     | Ignored                | —             |  
| `mul(11,8)`         | Disabled     | Ignored                | —             |  
| `do()`              | Enabled      | Enable future `mul`    | —             |  
| `mul(8,5)`          | Enabled      | Execute `8 * 5`        | `40`          |  

---

### Total Calculation  

The valid results are:  

```
8 + 40 = 48
```

---

## Task  

Update your analysis to handle **`do()`** and **`don't()`** instructions. Add up the results of only the **enabled `mul` instructions**.  

What is the total?  