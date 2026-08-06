/*
# Types of Variables in C

Variables are used to store data in memory. Before using a variable, you must declare its **data type**.

---

## 1. Integer Variable (`int`)

### Definition
- Used to store **whole numbers** (without decimal values).
- Can store positive, negative, or zero.

### Syntax
```c
int variable_name;
```

### Initialization
```c
int age = 18;
```

### Example
```c
#include <stdio.h>

int main()
{
    int marks = 95;

    printf("Marks = %d", marks);

    return 0;
}
```

### Output
```
Marks = 95
```

### Format Specifier
```c
%d
```

### Examples
```c
int a = 10;
int temperature = -5;
int count = 0;
```

---

## 2. Real Variable (`float`)

### Definition
- Used to store **decimal (floating-point) numbers**.
- Can store both positive and negative decimal values.

### Syntax
```c
float variable_name;
```

### Initialization
```c
float pi = 3.14;
```

### Example
```c
#include <stdio.h>

int main()
{
    float salary = 25000.50;

    printf("Salary = %f", salary);

    return 0;
}
```

### Output
```
Salary = 25000.500000
```

### Format Specifier
```c
%f
```

### Examples
```c
float pi = 3.14;
float height = 5.8;
float weight = 62.5;
```

**Note:** `%f` prints six digits after the decimal by default.

To print only two decimal places:
```c
printf("%.2f", pi);
```

Output:
```
3.14
```

---

## 3. Character Variable (`char`)

### Definition
- Used to store **a single character**.
- Characters must be enclosed in **single quotes (' ')**.

### Syntax
```c
char variable_name;
```

### Initialization
```c
char grade = 'A';
```

### Example
```c
#include <stdio.h>

int main()
{
    char letter = 'R';

    printf("Letter = %c", letter);

    return 0;
}
```

### Output
```
Letter = R
```

### Format Specifier
```c
%c
```

### Examples
```c
char gender = 'M';
char grade = 'A';
char symbol = '#';
```

---

# Comparison Table

| Data Type | Stores | Example | Format Specifier |
|-----------|--------|---------|------------------|
| `int` | Whole numbers | `int age = 18;` | `%d` |
| `float` | Decimal numbers | `float pi = 3.14;` | `%f` |
| `char` | Single character | `char grade = 'A';` | `%c` |

---

# Important Notes

### Integer (`int`)
- Stores only whole numbers.
- Cannot store decimal values.

Example:
```c
int num = 25;
```

---

### Float (`float`)
- Stores numbers with decimal points.
- Default precision is 6 decimal places when printed using `%f`.

Example:
```c
float price = 99.99;
```

---

### Character (`char`)
- Stores only one character.
- Uses **single quotes (' ')**.

Correct:
```c
char ch = 'A';
```

Wrong:
```c
char ch = "A";
```

Reason:
- `'A'` → Character
- `"A"` → String

---

# Memory Trick

- **int** → Integer → Whole Numbers
- **float** → Floating Point → Decimal Numbers
- **char** → Character → Single Letter/Symbol

---

# Quick Revision

```c
int age = 18;          // Integer
float pi = 3.14;       // Decimal Number
char grade = 'A';      // Single Character
```
*/