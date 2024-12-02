# Day 2: Red-Nosed Reports

Fortunately, the first location The Historians want to search isn't a long walk from the Chief Historian's office.

While the Red-Nosed Reindeer nuclear fusion/fission plant appears to contain no sign of the Chief Historian, the engineers there run up to you as soon as they see you. Apparently, they still talk about the time Rudolph was saved through molecular synthesis from a single electron.

They're quick to add that—since you're already here—they'd really appreciate your help analyzing some unusual data from the Red-Nosed reactor. You turn to check if The Historians are waiting for you, but they seem to have already divided into groups that are currently searching every corner of the facility. You offer to help with the unusual data.

---

## Puzzle Input

The unusual data (your puzzle input) consists of many reports, one report per line. Each report is a list of numbers called levels that are separated by spaces. For example:

```
7 6 4 2 1
1 2 7 8 9
9 7 6 2 1
1 3 2 4 5
8 6 4 4 1
1 3 6 7 9
```

This example data contains six reports, each containing five levels.

---

## Safety Rules

The engineers are trying to figure out which reports are safe. The Red-Nosed reactor safety systems can only tolerate levels that are either **gradually increasing** or **gradually decreasing**. A report is considered **safe** if both of the following conditions are true:

1. The levels are either **all increasing** or **all decreasing**.
2. Any two adjacent levels differ by **at least 1** and **at most 3**.

---

## Example Analysis

In the example above, the reports can be determined as safe or unsafe based on the rules:

| **Report**    | **Safety Check**                                                             | **Safe/Unsafe** |
|---------------|-----------------------------------------------------------------------------|-----------------|
| `7 6 4 2 1`   | Safe because the levels are all decreasing by 1 or 2.                       | ✅ **Safe**     |
| `1 2 7 8 9`   | Unsafe because `2 → 7` is an increase of 5.                                 | ❌ **Unsafe**   |
| `9 7 6 2 1`   | Unsafe because `6 → 2` is a decrease of 4.                                  | ❌ **Unsafe**   |
| `1 3 2 4 5`   | Unsafe because `1 → 3` is increasing but `3 → 2` is decreasing.             | ❌ **Unsafe**   |
| `8 6 4 4 1`   | Unsafe because `4 → 4` is neither an increase nor a decrease.               | ❌ **Unsafe**   |
| `1 3 6 7 9`   | Safe because the levels are all increasing by 1, 2, or 3.                   | ✅ **Safe**     |

### Safe Reports

In this example, **2 reports** are safe:

- `7 6 4 2 1`
- `1 3 6 7 9`

---

## Task

Analyze the unusual data from the engineers. **How many reports are safe?**