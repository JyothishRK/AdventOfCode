---

# Part Two  

---

## Story  

The reindeer spends a few minutes reviewing your hiking trail map before realizing something, disappearing for a few minutes, and finally returning with yet another slightly-charred piece of paper.  

The paper describes a **second way to measure a trailhead** called its **rating**.  

---

## Trailhead Rating  

A **trailhead's rating** is the number of **distinct hiking trails** which begin at that trailhead.  

For example:  

### Example 1  

```
.....0.
..4321.
..5..2.
..6543.
..7..4.
..8765.
..9....
```

This map has a single trailhead; its **rating is 3** because there are exactly three distinct hiking trails which begin at that position:  

```
.....0.   .....0.   .....0.
..4321.   .....1.   .....1.
..5....   .....2.   .....2.
..6....   ..6543.   .....3.
..7....   ..7....   .....4.
..8....   ..8....   ..8765.
..9....   ..9....   ..9....
```

---

### Example 2  

```
..90..9
...1.98
...2..7
6543456
765.987
876....
987....
```

This map contains a single trailhead with a **rating of 13**.  

---

### Example 3  

```
012345
123456
234567
345678
4.6789
56789.
```

This map contains a single trailhead with a **rating of 227**, because:  

- There are 121 distinct hiking trails that lead to the `9` on the **right edge**.  
- There are 106 distinct hiking trails that lead to the `9` on the **bottom edge**.  

---

## Larger Example  

```
89010123
78121874
87430965
96549874
45678903
32019012
01329801
10456732
```

Considering its trailheads in reading order, they have **ratings** of:  

`20, 24, 10, 4, 1, 4, 5, 8, 5`  

Adding these together, the **sum of all trailhead ratings** in this larger example is **81**.  

---

## Final Task  

**What is the sum of the ratings of all trailheads?**  

---