# --- Part Two ---

Your analysis only confirmed what everyone feared: the two lists of location IDs are indeed very different.

Or are they?

The Historians can't agree on which group made the mistakes or how to read most of the Chief's handwriting, but in the commotion you notice an interesting detail: a lot of location IDs appear in both lists! Maybe the other numbers aren't location IDs at all but rather misinterpreted handwriting.

This time, you'll need to figure out exactly how often each number from the left list appears in the right list. Calculate a total similarity score by adding up each number in the left list after multiplying it by the number of times that number appears in the right list.

## Example Lists

Here are the same example lists again:

| Left List | Right List |
|-----------|------------|
| 3         | 4          |
| 4         | 3          |
| 2         | 5          |
| 1         | 3          |
| 3         | 9          |
| 3         | 3          |

## Similarity Score Calculation

For these example lists, here is the process of finding the similarity score:

- The first number in the left list is **3**. It appears in the right list **three times**, so the similarity score increases by:  
  **3 * 3 = 9**
  
- The second number in the left list is **4**. It appears in the right list **once**, so the similarity score increases by:  
  **4 * 1 = 4**
  
- The third number in the left list is **2**. It does not appear in the right list, so the similarity score does not increase:  
  **2 * 0 = 0**
  
- The fourth number is **1**, which also does not appear in the right list.
  
- The fifth number is **3**, which appears in the right list **three times**. The similarity score increases by:  
  **3 * 3 = 9**
  
- The last number is **3** again, which appears in the right list **three times**. The similarity score increases by:  
  **3 * 3 = 9**

## Final Similarity Score

The total similarity score at the end of this process is:

```
9 + 4 + 0 + 0 + 9 + 9 = 31
```

Once again, consider your left and right lists. What is their similarity score?
```
