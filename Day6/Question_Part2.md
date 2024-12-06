# Day 6: Guard Gallivant  

---

## Part Two  

While **The Historians** begin working around the guard's patrol route, you borrow their fancy device and step outside the lab. From the safety of a **supply closet,** you time travel through the last few months and record the **nightly status of the lab's guard post** on the walls of the closet.  

Returning after what seems like only a few seconds to The Historians, they explain that:  

> **The guard's patrol area is simply too large** for them to safely search the lab without getting caught.  

Fortunately, they are pretty sure that **adding a single new obstruction** won't cause a **time paradox.** They'd like to place the new obstruction in such a way that:  

- The guard will get **stuck in a loop**, making the rest of the lab safe to search.  
- The new obstruction **can't be placed at the guard's starting position** since that would give the guard a chance to notice.  

---

## Objective  

Your task is to determine **all the possible positions** for adding such an obstruction that would cause the guard to become stuck in a loop.  

---

## Example Options  

Here are the **six example positions** from the map:

---

### Option 1: Next to the guard's starting position  

```
....#.....
....+---+#  
....|...|.  
..#.|...|.  
....|..#|.  
....|...|.  
.#.O^---+.  
........#.  
#.........  
......#...
```

---

### Option 2: In the bottom-right quadrant with a stack of failed suit prototypes  

```
....#.....
....+---+#  
....|...|.  
..#.|...|.  
..+-+-+#|.  
..|.|.|.|.  
.#+-^-+-+.  
......O.#.  
#.........  
......#...
```

---

### Option 3: Near the standing desk with a crate of chimney-squeeze prototype fabric  

```
....#.....
....+---+#  
....|...|.  
..#.|...|.  
..+-+-+#|.  
..|.|.|.|.  
.#+-^-+-+.  
.+----+O#.  
#+----+...  
......#...
```

---

### Option 4: An alchemical retroencabulator near the bottom-left corner  

```
....#.....
....+---+#  
....|...|.  
..#.|...|.  
..+-+-+#|.  
..|.|.|.|.  
.#+-^-+-+.  
..|...|.#.  
#O+---+...  
......#...
```

---

### Option 5: Slightly to the right in the same area as the retroencabulator  

```
....#.....
....+---+#  
....|...|.  
..#.|...|.  
..+-+-+#|.  
..|.|.|.|.  
.#+-^-+-+.  
....|.|.#.  
#..O+-+...  
......#...
```

---

### Option 6: A tank of sovereign glue right next to the tank of universal solvent  

```
....#.....
....+---+#  
....|...|.  
..#.|...|.  
..+-+-+#|.  
..|.|.|.|.  
.#+-^-+-+.  
.+----++#.  
#+----++..  
......#O..
```

---

## Explanation  

These six positions represent the different ways a new obstruction could **trap the guard in a loop.** The objective is to find how many unique positions can successfully be used.  

---

## Final Task  

**You need to get the guard stuck in a loop by adding a single new obstruction. How many different positions could you choose for this obstruction?**

---