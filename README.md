# AdventOfCode 2024

This repository contains my solutions to the Advent of Code 2024 challenges. Each day's solution is organized in a dedicated folder, which includes the problem statements, test cases, and C++ code for both parts of the challenge.

## Repository Structure

The repository follows this structure for each day:

- `Question_Part1.md`: Problem statement for Part 1
- `Question_Part2.md`: Problem statement for Part 2
- `dummy.txt`: Dummy test case (used for both parts)
- `Day<num>_Part1.cpp`: Solution for Part 1
- `Day<num>_Part2.cpp`: Solution for Part 2
- `Day<num>.txt`: Actual test case file for both Part 1 and Part 2
- Folder: `Day<num>` (dedicated folder for each day)

Each folder (`Day<num>`) contains the following files:
- Problem statements: `Question_Part1.md` and `Question_Part2.md` for Part 1 and Part 2, respectively.
- Test cases: `dummy.txt` (a simple test case) and `Day<num>.txt` (the actual test case used for both parts).
- Solutions: `Day<num>_Part1.cpp` (solution for Part 1) and `Day<num>_Part2.cpp` (solution for Part 2).

## How to Use

1. Clone the repository:
   ```
   git clone https://github.com/JyothishRK/AdventOfCode.git
   ```

2. Navigate to the folder of the day you're interested in:
   ```
   cd AdventOfCode/Day<num>
   ```

3. Open the problem statement in `Question_Part1.md` or `Question_Part2.md` to understand the challenge.

4. Run the C++ solution for Part 1:
   ```
   g++ Day<num>_Part1.cpp -o Part1_solution
   ./Part1_solution
   ```

5. Run the C++ solution for Part 2:
   ```
   g++ Day<num>_Part2.cpp -o Part2_solution
   ./Part2_solution
   ```

In the C++ code, the input files (`dummy.txt` and `Day<num>.txt`) are hardcoded, so you don't need to pass them manually as arguments.

## Contributing

Feel free to fork the repository and submit a pull request with improvements or other solutions. Make sure to follow the file structure and include your test cases.

## License

This project is licensed under the MIT License - see the LICENSE file for details.

---
