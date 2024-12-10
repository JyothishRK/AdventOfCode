---

# Day 10: Hoof It  

---

## Story  

You all arrive at a **Lava Production Facility** on a floating island in the sky. As the others begin to search the massive industrial complex, you feel a small nose boop your leg and look down to discover a **reindeer wearing a hard hat**.  

The reindeer is holding a book titled "**Lava Island Hiking Guide**." However, when you open the book, you discover that most of it seems to have been **scorched by lava**! As you're about to ask how you can help, the reindeer brings you a blank topographic map of the surrounding area (your puzzle input) and looks up at you excitedly.  

**Perhaps you can help fill in the missing hiking trails?**  

---

## Puzzle Input  

The topographic map indicates the height at each position using a scale from `0` (lowest) to `9` (highest). For example:  

```
0123
1234
8765
9876
```

Based on un-scorched scraps of the book, you determine that a **good hiking trail** is:  

- **As long as possible**  
- Has an **even, gradual, uphill slope**  

For all practical purposes, this means:  

- A hiking trail starts at height `0`.  
- Ends at height `9`.  
- Always increases by exactly `1` at each step.  
- Hiking trails **never include diagonal steps**—only **up**, **down**, **left**, or **right**.  

---

## Objective  

A **trailhead** is any position that starts one or more hiking trails. These positions always have height `0`.  

Assembling more fragments of pages, you establish that a **trailhead's score** is the **number of `9`-height positions reachable from that trailhead** via a hiking trail.  

---

## Examples  

### Example 1  

```
...0...
...1...
...2...
6543456
7.....7
8.....8
9.....9
```

In this map, the **trailhead** at the top has a score of **2** because two `9`-height positions are reachable via a hiking trail.  

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

Here, the trailhead at the top has a score of **4** because every `9` is reachable via a hiking trail except the one immediately to the left of the trailhead.  

---

### Example 3  

```
10..9..
2...8..
3...7..
4567654
...8..3
...9..2
.....01
```

This topographic map contains two trailheads:  

- **Top trailhead** has a score of **1**.  
- **Bottom trailhead** has a score of **2**.  

---

### Larger Example  

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

This larger example has **9 trailheads**. Considering the trailheads in reading order, they have scores of:  

`5, 6, 5, 3, 1, 3, 5, 3, 5`  

Adding these together, the **sum of the scores** of all trailheads is **36**.  

---

## Final Task  

**What is the sum of the scores of all trailheads on your topographic map?**  

---