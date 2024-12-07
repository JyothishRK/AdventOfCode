---

# Day 7: Bridge Repair  

---

## **Task**  

The Historians take you to a familiar rope bridge over a river in the middle of a jungle. The Chief isn't on this side of the bridge, though; maybe he's on the other side?  

When you go to cross the bridge, you notice a group of engineers trying to repair it. (Apparently, it breaks pretty frequently.) You won't be able to cross until it's fixed.  

You ask how long it'll take; the engineers tell you that it only needs **final calibrations**, but some young elephants were playing nearby and stole all the operators from their **calibration equations**! They could finish the calibrations if only someone could determine which test values could possibly be produced by placing any combination of operators into their calibration equations (your puzzle input).  

---

## **Input Example**  

Each line represents a single equation. The test value appears before the colon, and the remaining numbers are operands:  

```
190: 10 19  
3267: 81 40 27  
83: 17 5  
156: 15 6  
7290: 6 8 6 15  
161011: 16 10 13  
192: 17 8 14  
21037: 9 7 18 13  
292: 11 6 16 20  
```  

---

## **Operators and Rules**  

- **Operators**: Add (`+`) and Multiply (`*`)  
- **Order of Evaluation**: Left-to-right (not based on operator precedence).  
- **Restriction**: Numbers cannot be rearranged.  

---

## **Examples**  

### Example 1  

**Input**:  
```
190: 10 19  
```

**Analysis**:  
- Possible combinations:  
  - `10 + 19 = 29` (does not match the test value).  
  - `10 * 19 = 190` (matches the test value).  

**Result**: Valid  

---

### Example 2  

**Input**:  
```
3267: 81 40 27  
```

**Analysis**:  
- Possible combinations:  
  - `81 + 40 + 27 = 148` (does not match).  
  - `81 * 40 * 27 = 87480` (does not match).  
  - `81 + 40 * 27 = 3267` (matches).  
  - `81 * 40 + 27 = 3267` (matches).  

**Result**: Valid  

---

### Example 3  

**Input**:  
```
292: 11 6 16 20  
```

**Analysis**:  
- Valid equation: `11 + 6 * 16 + 20 = 292`.  

**Result**: Valid  

---

## **Objective**  

For the example data, the valid equations are:  
- **190: 10 19**  
- **3267: 81 40 27**  
- **292: 11 6 16 20**  

The total calibration result is:  
**190 + 3267 + 292 = 3749**  

---

### **Final Task**  

**Determine which equations could possibly be true. What is their total calibration result?**

---