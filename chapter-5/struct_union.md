
# Structs in C
In C, a struct (short for structure) is a user-defined data type that allows you to group different types of variables under a single name. While an array holds many items of the same type, a struct holds many items of different types.
Think of it like a "package" or a "folder" for related data.

## Key points
- A struct is a data type made from a sequence of other data types.
- Struct fields are stored in memory in the same order they appear in the code.
- Structs are fixed length.
- You can nest structs.
- Struct fields are accessed by name, using the ``<struct>.<field name>`` syntax (aka dot notation).
- Typedef creates an alias for a data type. If you use typedef with a struct, then you can skip giving the struct a name.


## Rules of Structs
Here are the essential rules for working with **Structs** in C

## 1. Definition & Syntax Rules

* **The Semicolon:** You **must** place a semicolon after the closing brace of a struct definition.
* *Example:* `struct User { ... };`


* **No Self-Inclusion:** A struct cannot contain an instance of itself (it doesn't know its own size yet), but it **can** contain a pointer to its own type.
* *Wrong:* `struct Node { struct Node next; };`
* *Right:* `struct Node { struct Node *next; };`


* **Scope:** If you define a struct inside a function, it is local to that function. Define it outside (usually in a `.h` file) to use it globally.

---

## 2. The "Access" Rules

This is the most important rule for beginners. The operator you use depends on the **type** of variable you are holding.

| If you have a... | Use this Operator | Example |
| --- | --- | --- |
| **Direct Variable** | `.` (Dot) | `john.age = 30;` |
| **Pointer to Struct** | `->` (Arrow) | `ptr->age = 30;` |

> **Note:** `ptr->age` is actually just a shorthand for `(*ptr).age`.

---

## 3. Initialization Rules

* **Sequential Initialization:** By default, values are assigned in the order members appear in the definition.
* `Player p = {"Hero", 100};`

* **Designated Initializers (C99+):** You can initialize by name. This is preferred in professional code because it is safer.
* `Player p = {.health = 100, .name = "Hero"};`


* **Zeroing Out:** If you initialize at least one member, all other members are automatically set to `0` or `NULL`.
* `Player p = {0}; // All members become 0`



---

## 4. Memory & Alignment Rules

* **Contiguous Storage:** Struct members are stored in memory one after another in the order they are defined.
* **The Padding Rule:** The compiler often adds "hidden" bytes (padding) between members so they align with the CPU's word size (usually 4 or 8 bytes).
* *Result:* `sizeof(struct)` is often **larger** than the sum of its individual parts.
* **Placement Strategy:** To minimize wasted space, define your largest variables (like `double`) at the top and smallest (like `char`) at the bottom.

---

## 5. Function & Passing Rules

* **Pass by Value:** If you pass a struct to a function (`void func(struct User u)`), C copies the **entire** memory block. For large structs, this kills performance.
* **Pass by Reference:** Always pass a **pointer** (`void func(struct User *u)`). This only copies 8 bytes (the address) and allows the function to modify the original data.

---

## 6. String Handling Rules

* **Arrays:** Use `char name[50]` if you want the struct to "own" and store the name inside its own memory block.
* **Pointers:** Use `char *name` if the name is stored elsewhere (like a string literal) and the struct just needs to "point" to it.
* **Assignments:** You cannot use `=` to assign a new string to an array inside a struct. You must use `strcpy` or `strncpy`.
* *Wrong:* `p1.name = "Alex";`
* *Right:* `strcpy(p1.name, "Alex");`



---

### Summary Table

| Rule Category | The "Golden Rule" |
| --- | --- |
| **Ending** | Always end with `};` |
| **Pointer Access** | Use `->` when working with `malloc` or passed pointers. |
| **Optimization** | Put largest data types first to avoid padding waste. |
| **Efficiency** | Pass pointers to functions, not the whole struct. |

**Would you like me to show you how to combine these rules into a "Linked List" structure, which is the most common use for structs and pointers together?**



## Preprocessors and struct
In C, those `#` tags are called **Preprocessor Directives**. They aren't actually part of the C language itself; they are instructions for the "Preprocessor," a program that scans your code *before* it gets compiled.

Specifically, the `#ifndef`, `#define`, and `#endif` tags are known as **Header Guards**.

---

### Why do we need them?

In a large project, different `.c` files might include the same header. For example:

1. `main.c` includes `employee.h`.
2. `payroll.c` also includes `employee.h`.
3. If `main.c` uses functions from `payroll.c`, it might end up including `employee.h` **twice**.

Without Header Guards, the compiler would see `struct employee` defined twice and throw an error: *"Redefinition of struct employee."*

---

### How they work (The Logic)

Think of it like a security check at a door:

1. **`#ifndef EMPLOYEE_H`** (If Not Defined)
The preprocessor checks: "Has a label named `EMPLOYEE_H` been created yet?"
2. **`#define EMPLOYEE_H`**
If the label doesn't exist, it creates it immediately. This "marks" the file as seen.
3. **The Code**
The compiler reads your struct and function prototypes.
4. **`#endif`**
This marks the end of the "guarded" section.

**The Second Time Around:**
If the file is included again, the `#ifndef` check fails (because the label already exists). The preprocessor skips everything until the `#endif`, effectively "hiding" the duplicate code from the compiler.

---

### Breakdown of the tags

| Tag | Full Name | Purpose |
| --- | --- | --- |
| **`#ifndef`** | If Not Defined | Checks if the unique "guard" name exists. |
| **`#define`** | Define | Creates the "guard" name if it's the first time through. |
| **`#endif`** | End If | Tells the preprocessor where the check ends. |

---

### Pro Tips for Header Guards

* **Unique Names:** The name (e.g., `EMPLOYEE_H`) must be unique across your entire project. Usually, developers use the filename in uppercase with an underscore.
* **The Modern Alternative:** Many modern compilers support a simpler version called `#pragma once`. You just put that one line at the very top of your header file instead of the three-line guard.
```c
#pragma once

typedef struct { ... } Employee;

```



**Would you like me to show you what a compiler error looks like when you forget these guards and include a file twice?**

