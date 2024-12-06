---

# Day 5: Print Queue  

---

## Context  

Satisfied with their search on **Ceres**, the squadron of scholars suggests subsequently scanning the **stationery stacks of sub-basement 17.**  

The **North Pole printing department** is busier than ever this close to Christmas, and while The Historians continue their search of this historically significant facility, an Elf operating a very familiar printer beckons you over.  

The Elf must recognize you because they waste no time explaining that:  

> The new **sleigh launch safety manual updates** won't print correctly. Failure to update the safety manuals would be dire indeed, so you offer your assistance.  

---

## Task  

The **rules of printing** dictate that:  

- Pages must be printed in a specific order.  
- The notation `X|Y` means that if both **page numbers X and Y** are part of an update, page number **X** must be printed at some point **before** page number **Y**.  

You have two sections:  
1. **Page ordering rules** (specified in the form of `X|Y`).  
2. **List of updates** (specific sequences of page numbers).  

Your goal is to determine:  

> Which updates are already in the correct order?  

Also, compute:  

> The **middle page number** for each **correctly-ordered update**, and return the sum of these middle numbers.

---

## Example Input  

The **page ordering rules**:

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

The **updates**:

```
75,47,61,53,29  
97,61,53,29,13  
75,29,13  
75,97,47,61,53  
61,13,29  
97,13,75,29,47  
```

---

## Analysis  

The **first example update** `75,47,61,53,29` follows the rules, i.e., it is in the correct order. The other updates may or may not follow the rules.  

The objective includes:  
1. **Determining which updates are correct**.  
2. **Finding the middle number for each valid update** and summing them.  

---

## Steps  

1. Parse the **page ordering rules**.  
2. Parse each **update sequence**.  
3. Validate each update sequence against the provided rules.  
4. For each valid update sequence, determine the middle number.  
5. Compute the sum of the middle numbers for all valid updates.

---

## Example Output  

From the given example, the **valid updates** are:  

1. `75,47,61,53,29` → Middle number = **61**  
2. `97,61,53,29,13` → Middle number = **53**  
3. `75,29,13` → Middle number = **29**  

The sum = **61 + 53 + 29 = 143**.

---

## Final Task  

Determine which updates are already in the **correct order** and compute the **sum of the middle page numbers** from these updates.