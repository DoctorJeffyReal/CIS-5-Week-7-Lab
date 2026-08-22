# Lab 7 · Loop tools

**Week 07 · Loops**  
**Theme:** Do it again on purpose  
**Type:** Lesson week


## Demo video (required)

Paste a link to a short video of you running this assignment (tool + code + run).
Work without a working video link is incomplete.

**Your demo:** _add your link here_


## Scenario
A loop repeats a block of code while a condition stays true. Every loop needs a start value, a test, and an update. If the update is missing, the loop never ends.

## Goals
- A validator: `do while` until the input is in range
- A countdown or table with `for`
- Prove it stops: show a bad input, then a good one, then the count
- Push + short demo + Canvas

## Starter
Use `main.cpp`. Put your name in the file-top comment.

## Environment
VS 2022 · **GitHub Codespaces** · Replit · library machines

## Procedure
1. Ask for a number in a range (for example 1–10)
2. Repeat until it’s valid (`do while`)
3. Count down (or print a small table) with `for`
4. In the demo: type a bad value, then a good one
5. Commit, push, Canvas

## Sample output
```
Enter 1-10: 0
Enter 1-10: 4
Countdown:
4
3
2
1
```

## Definition of done
- Compiles with zero errors
- Validation loop + a counting loop
- Demo shows a rejected input
- Repo + short demo + Canvas

## Rubric (100)
| Criterion | Pts |
|-----------|----:|
| Runs correctly on a supported path | 40 |
| Meets prompt requirements | 30 |
| Clear prompts / output | 15 |
| GitHub + short demo video | 15 |

## Scope fence
No `goto`. No arrays required yet. Functions not required.

## Tips
- If it never ends, look at the **update** (`--i`, or a new `cin`)
- Off-by-one is a fencepost: 1 through n, or 0 through n-1?
- `for` when you can count. `do while` when you must ask first

## Help (`/ring`)
After a real try, include: goal · what you tried · exact error · screenshot/repo · OS + tool.

## Getting started

1. Fork this repo on GitHub.
2. Clone your fork.
3. Compile and run:

```bash
g++ -std=c++17 -o program main.cpp && ./program
```

On Windows (Visual Studio), open `main.cpp` and use **Local Windows Debugger**.
4. Record a short demo that shows your tool, your code, and a real run.
5. Paste the video link in the **Demo video** section above.
6. Submit your fork URL on Canvas.
