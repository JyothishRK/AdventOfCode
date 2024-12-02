# Part Two: Problem Dampener  

The engineers are surprised by the low number of safe reports until they realize they forgot to tell you about the **Problem Dampener**.  

---

## Problem Dampener Description  

The **Problem Dampener** is a reactor-mounted module that allows the reactor safety systems to tolerate a **single bad level** in what would otherwise be a safe report. It's like the bad level never happened!  

Now, the same rules as before apply, except:  
- If **removing a single level** from an unsafe report would make it safe, the report instead counts as **safe**.  

---

## Example Analysis with Problem Dampener  

Here are the same example reports:  

```
7 6 4 2 1  
1 2 7 8 9  
9 7 6 2 1  
1 3 2 4 5  
8 6 4 4 1  
1 3 6 7 9  
```

### Safety Analysis  

| **Report**    | **Safety Check with Problem Dampener**                                     | **Safe/Unsafe** |
|---------------|---------------------------------------------------------------------------|-----------------|
| `7 6 4 2 1`   | Safe without removing any level.                                          | ✅ **Safe**     |
| `1 2 7 8 9`   | Unsafe regardless of which level is removed.                              | ❌ **Unsafe**   |
| `9 7 6 2 1`   | Unsafe regardless of which level is removed.                              | ❌ **Unsafe**   |
| `1 3 2 4 5`   | Safe by removing the second level, `3`.                                   | ✅ **Safe**     |
| `8 6 4 4 1`   | Safe by removing the third level, `4`.                                    | ✅ **Safe**     |
| `1 3 6 7 9`   | Safe without removing any level.                                          | ✅ **Safe**     |

---

### Updated Safe Reports  

With the Problem Dampener:  
- `7 6 4 2 1`: Safe without changes.  
- `1 3 2 4 5`: Safe by removing `3`.  
- `8 6 4 4 1`: Safe by removing `4`.  
- `1 3 6 7 9`: Safe without changes.  

**Total Safe Reports: 4**  

---

## Task  

Update your analysis by handling situations where the **Problem Dampener** can remove a single level from unsafe reports. **How many reports are now safe?**  