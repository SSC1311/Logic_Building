# Logic Building with Industrial Project Development

### A live record of problem solving in C, C++ and Java

Syntax is the easy part of programming. The real skill is looking at a problem nobody has solved for you and building the logic that cracks it.

This repository is where that skill is being built: the working code from the **Logic Building with Industrial Project Development** programme at Marvellous Infosystems. It is not a finished archive. The programme is still running, new programs arrive after every class, and the problems keep getting harder.

**Siddesh Choudhari** | Final-year Computer Engineering student | GenAI Engineering Intern
[LinkedIn](https://www.linkedin.com/in/siddesh-choudhari-ssc1311) | [GitHub](https://github.com/SSC1311)

---

## The journey

| Stage | What it builds | Where it lives |
|---|---|---|
| **Foundation** | How a computer really runs code: memory, pointers, compilation, object-oriented design, Java core, networking, SQL | [PPA repository](https://github.com/SSC1311/PPA) |
| **Logic building** *(the heart)* | Turning an unfamiliar problem into a correct, clean solution, one program after another | **This repository** |
| **Data structures** | Linked lists, stacks, queues and trees, built from scratch. This stage begins in December | Coming to this repository |
| **Industrial projects** | Putting everything together into real, working software | Coming to this repository |

The order is deliberate. Anyone can copy a solution. Writing one quickly and correctly depends on understanding what the machine does with every line, and that understanding comes from the foundation stage. Logic building is where that knowledge is put under pressure.

---

## How every problem is solved

Whatever the problem, the process is the same five steps:

| Step | What happens | Example: "Is this number prime?" |
|---|---|---|
| **1. Understand the problem statement** | Identify what goes in, what comes out, and what the limits are | Input: a whole number. Output: yes or no |
| **2. Write the algorithm** | Plan the solution in plain language before touching code | Try dividing by every number up to its square root. If any divides evenly, it is not prime |
| **3. Decide the programming language** | Choose the language that suits the problem | C for low-level control, C++ for classes and templates, Java for libraries |
| **4. Write the program** | Turn the algorithm into clean, readable code | `107_check_prime.c` |
| **5. Test the program** | Try normal cases, edge cases and bad input | 0, 1, 2, 17, 25, a very large number, a negative number |

Step 3 is why this repository moves between C, C++ and Java. The language is chosen for each problem, and the logic stays the same in all three.

---

## Inside the repository

```
LB/
├── README.md
├── PROGRAM_INDEX.md                 <- every program: number, topic, language, idea
├── .gitignore                       <- keeps compiled files out of the repo
├── 01_Basics_and_Input_Output/
├── 02_Selection_and_Functions/
├── 03_Iteration_and_Numbers/        <- sums, factorial, factors, perfect and prime numbers
├── 04_Digits/
├── 05_Pattern_Printing/
├── 06_Strings/
├── 07_Generic_Programming_Cpp/      <- C++ templates
├── 08_Bitwise_and_Number_Systems/
├── Extras/                          <- short side exercises
└── ...                              <- a new folder appears whenever a new topic begins
```

- **Files keep their class order.** Each file name starts with its sequence number, followed by what it solves, for example `107_check_prime.c`. The numbering shows exactly how the programme progressed.
- **Problem statements travel with the code.** Newer programs open with their problem statement, and the index records the idea behind every program.
- **The index is the quickest way in.** `PROGRAM_INDEX.md` lists every program by number, topic and language.
- **A few files break on purpose.** They demonstrate a mistake or a language limit, and the index flags each one.

---

## Where things stand

| Area | Status |
|---|---|
| Basics, input and output, functions | ✅ Practised |
| Iteration, numbers and digits | ✅ Practised |
| Pattern printing | ✅ Practised |
| Strings | ✅ Practised |
| Generic programming with C++ templates | ✅ Practised |
| Number systems and bitwise operators | 🔄 In progress |
| Arrays, matrices and dynamic memory | ⏳ Next |
| Recursion, searching and sorting | ⏳ Next |
| Object-oriented design and the Java collections framework | ⏳ Next |
| Linked lists, stacks, queues and trees | ⏳ From December |
| Industrial projects | ⏳ Later in the programme |

---

## Languages

| Language | Role |
|---|---|
| **C** | Low-level logic: numbers, digits, patterns, strings, bit manipulation |
| **C++** | Generic programming today; classes, inheritance and the STL as the programme moves on |
| **Java** | Core problem solving today; collections and object-oriented design to come |

The `Extras` folder holds a short JavaScript session, a side exercise in learning a brand-new language quickly.

---

## Assignments

Class assignments are solved and submitted language-wise, in three dedicated repositories. This keeps the code easy to revise and compare.

| Language | Repository |
|---|---|
| C | [C_Programming](https://github.com/SSC1311/C_Programming) |
| C++ | [C++_Programming](https://github.com/SSC1311/C++_Programming) |
| Java | [Java_Programming](https://github.com/SSC1311/Java_Programming) |

---

## Rhythm

New code is pushed regularly as the classes move forward. The contribution graph on my [profile](https://github.com/SSC1311) shows that rhythm. The topic table above is updated as each new stage begins.

---

Built by **Siddesh Choudhari**
[LinkedIn](https://www.linkedin.com/in/siddesh-choudhari-ssc1311) | [GitHub](https://github.com/SSC1311)
