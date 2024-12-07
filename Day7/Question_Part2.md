---

# Part Two  

---

## Context  

The engineers seem concerned; the **total calibration result** you gave them is nowhere close to being within safety tolerances. Just then, you spot your mistake: some well-hidden elephants are holding a **third type of operator.**  

The **concatenation operator (`||`)** combines the digits from its left and right inputs into a single number. For example:  

```
12 || 345 = 12345
```  

All operators are still evaluated **left-to-right.**  

---

## New Findings  

Now, apart from the **three equations** that could be made true using only **addition (+)** and **multiplication (*)**,** the above example has **three more equations** that can be made true by inserting operators using **concatenation (`||`)** as well:  

### Examples  

1. **156: 15 6**  
   - Can be made true through a single concatenation:  
     ```
     15 || 6 = 156
     ```

2. **7290: 6 8 6 15**  
   - Can be made true using:  
     ```
     6 * 8 || 6 * 15
     ```

3. **192: 17 8 14**  
   - Can be made true using:  
     ```
     17 || 8 + 14
     ```

---

## Result  

Adding up all **six test values** (the three that could be made true before using only **+** and **\*** and the three that now include `||`) produces the **new total calibration result** of:  

```
11387
```

---

## Task  

Using your new knowledge of **elephant hiding spots**, determine which equations could possibly be true. **What is their total calibration result?**  

