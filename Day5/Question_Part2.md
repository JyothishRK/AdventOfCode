---

# Part Two  

---

## Context  

While the **Elves** are busy printing the correctly-ordered updates, you have time to fix the remaining incorrectly-ordered updates using the given **page ordering rules.**  

Your task is to:  
1. Correctly reorder the **incorrectly-ordered updates** using the provided rules.  
2. Determine the middle page number for each of these corrected updates.  
3. Add these middle numbers together.

---

## Steps  

1. **Parse the page ordering rules** and the list of incorrectly-ordered updates.  
2. Correct each **update** that is not already in order using the rules provided.  
3. For each reordered update, compute the **middle page number**.  
4. Sum these middle numbers.

---

## Input  

The **page ordering rules** from the previous example:

```
47|53  
97|13  
97|61  
97|47  
75|29  
61|13  
75|53  
29|13  
97|29  
53|29  
61|53  
97|53  
61|29  
47|13  
75|47  
97|75  
47|61  
75|61  
47|29  
75|13  
53|13  
```

The **incorrectly-ordered updates**:

```
75,97,47,61,53  
61,13,29  
97,13,75,29,47  
```

---

## Example Output  

From the example above:

1. Correctly reordering `75,97,47,61,53` gives **97,75,47,61,53**, with a middle number of **47**.  
2. Correctly reordering `61,13,29` gives **61,29,13**, with a middle number of **29**.  
3. Correctly reordering `97,13,75,29,47` gives **97,75,47,29,13**, with a middle number of **47**.  

Adding these middle numbers:  

\[
47 + 29 + 47 = 123
\]

---

## Final Task  

After correctly reordering only the **incorrectly-ordered updates,** compute their **middle page numbers' sum.** The answer is **123**.