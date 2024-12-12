---

# Day 12: Garden Groups – Part Two  

---

## Story  

Fortunately, the Elves are trying to order so much fence that they qualify for a **bulk discount**!  

Under the bulk discount, instead of using the perimeter to calculate the price, you need to use the **number of sides** each region has.  

Each **straight section of fence** counts as a side, regardless of how long it is.  

---

## Revised Calculations  

1. **Area**:  
   The **area** of a region remains the same as before: the number of garden plots in the region.  

2. **Sides**:  
   Each **straight section of fence** enclosing a region counts as a side. This can include sides on the inside of regions that do not connect across diagonals.  

3. **Fence Price**:  
   The **new price** of fencing a region is calculated by multiplying the region's **area** by the **number of sides**.  

---

### Examples  

#### Example 1  

```
AAAA
BBCD
BBCC
EEEC
```  

- **A**: Area = 4, Sides = 4 → Price = 4 * 4 = **16**  
- **B**: Area = 4, Sides = 4 → Price = 4 * 4 = **16**  
- **C**: Area = 4, Sides = 8 → Price = 4 * 8 = **32**  
- **D**: Area = 1, Sides = 4 → Price = 1 * 4 = **4**  
- **E**: Area = 3, Sides = 4 → Price = 3 * 4 = **12**  

**Total Price** = 16 + 16 + 32 + 4 + 12 = **80**  

---

#### Example 2  

```
OOOOO
OXOXO
OOOOO
OXOXO
OOOOO
```  

- **O**: Area = 21, Sides = 20 → Price = 21 * 20 = **420**  
- Each **X**: Area = 1, Sides = 4 → Price = 1 * 4 = **4**  

**Total Price** = 420 + 4 + 4 + 4 + 4 = **436**  

---

#### Complex Example  

```
EEEEE
EXXXX
EEEEE
EXXXX
EEEEE
```  

- **E**: Area = 17, Sides = 12 → Price = 17 * 12 = **204**  
- Each **X**: Area = 1, Sides = 4 → Price = 1 * 4 = **4**  

**Total Price** = 204 + 4 + 4 = **236**  

---

### Larger Example  

```
RRRRIICCFF
RRRRIICCCF
VVRRRCCFFF
VVRCCCJFFF
VVVVCJJCFE
VVIVCCJJEE
VVIIICJJEE
MIIIIIJJEE
MIIISIJEEE
MMMISSJEEE
```  

**Regions and Prices**:  

- **R**: Area = 12, Sides = 10 → Price = **120**  
- **I**: Area = 4, Sides = 4 → Price = **16**  
- **C**: Area = 14, Sides = 22 → Price = **308**  
- **F**: Area = 10, Sides = 12 → Price = **120**  
- **V**: Area = 13, Sides = 10 → Price = **130**  
- **J**: Area = 11, Sides = 12 → Price = **132**  
- **C**: Area = 1, Sides = 4 → Price = **4**  
- **E**: Area = 13, Sides = 8 → Price = **104**  
- **I**: Area = 14, Sides = 16 → Price = **224**  
- **M**: Area = 5, Sides = 6 → Price = **30**  
- **S**: Area = 3, Sides = 6 → Price = **18**  

**Total Price** = 120 + 16 + 308 + 120 + 130 + 132 + 4 + 104 + 224 + 30 + 18 = **1206**  

---

## Final Task  

**What is the new total price of fencing all regions on your map?**  

---