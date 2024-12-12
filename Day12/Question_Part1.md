---

# Day 12: Garden Groups  

---

## Story  

Why not search for the **Chief Historian** near the gardener and his massive farm? There's plenty of food, so The Historians grab something to eat while they search.  

You're about to settle near a complex arrangement of **garden plots** when some Elves ask if you can lend a hand. They'd like to set up fences around each region of garden plots, but they can't figure out how much fence they need to order or how much it will cost. They hand you a map (your puzzle input) of the garden plots.  

---

## Objective  

Each garden plot grows only a single type of plant and is indicated by a **single letter** on your map. When multiple garden plots are growing the same type of plant and are touching (horizontally or vertically), they form a **region**.  

For example:  

```
AAAA
BBCD
BBCC
EEEC
```  

This 4x4 arrangement includes garden plots growing five different types of plants (labeled **A**, **B**, **C**, **D**, and **E**), each grouped into their own region.  

---

### Calculations  

1. **Area**:  
   The **area** of a region is the number of garden plots the region contains.  

2. **Perimeter**:  
   The **perimeter** of a region is the number of sides of garden plots in the region that do not touch another garden plot in the same region.  

3. **Fence Price**:  
   The price of fencing a region is found by multiplying the region's **area** by its **perimeter**. The total price is the sum of fencing costs for all regions on the map.  

---

### Examples  

#### Example 1  

```
AAAA
BBCD
BBCC
EEEC
```  

- **A**: Area = 4, Perimeter = 10 → Price = 4 * 10 = **40**  
- **B**: Area = 4, Perimeter = 8 → Price = 4 * 8 = **32**  
- **C**: Area = 4, Perimeter = 10 → Price = 4 * 10 = **40**  
- **D**: Area = 1, Perimeter = 4 → Price = 1 * 4 = **4**  
- **E**: Area = 3, Perimeter = 8 → Price = 3 * 8 = **24**  

**Total Price** = 40 + 32 + 40 + 4 + 24 = **140**  

---

#### Example 2  

```
OOOOO
OXOXO
OOOOO
OXOXO
OOOOO
```  

- **O**: Area = 21, Perimeter = 36 → Price = 21 * 36 = **756**  
- Each **X**: Area = 1, Perimeter = 4 → Price = 1 * 4 = **4**  

**Total Price** = 756 + 4 + 4 + 4 + 4 = **772**  

---

#### Larger Example  

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

- **R**: Area = 12, Perimeter = 18 → Price = **216**  
- **I**: Area = 4, Perimeter = 8 → Price = **32**  
- **C**: Area = 14, Perimeter = 28 → Price = **392**  
- **F**: Area = 10, Perimeter = 18 → Price = **180**  
- **V**: Area = 13, Perimeter = 20 → Price = **260**  
- **J**: Area = 11, Perimeter = 20 → Price = **220**  
- **C**: Area = 1, Perimeter = 4 → Price = **4**  
- **E**: Area = 13, Perimeter = 18 → Price = **234**  
- **I**: Area = 14, Perimeter = 22 → Price = **308**  
- **M**: Area = 5, Perimeter = 12 → Price = **60**  
- **S**: Area = 3, Perimeter = 8 → Price = **24**  

**Total Price** = 1930  

---

## Final Task  

**What is the total price of fencing all regions on your map?**  

---