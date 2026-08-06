/*
# Type Conversion in C (Promotion and Demotion)

## What is Type Conversion?

Type conversion is the process of converting a value from one data type to another.

The compiler automatically converts data types when assigning values to variables of different types.

There are two types:

1. Promotion (Smaller type → Larger type)
2. Demotion (Larger type → Smaller type)

---

# 1. Demotion

Demotion occurs when a larger data type is converted into a smaller data type.

During demotion, some data may be lost.

### Example

```c
#include <stdio.h>

int main() {

    int a = 3.5;

    printf("%d", a);

    return 0;
}
```

Output

```
3
```

### Explanation

- `3.5` is a **float** value.
- `a` is an **int** variable.
- Integers cannot store decimal values.
- The decimal part (`.5`) is removed.
- Therefore, `a` stores **3**.

This process is called **Demotion (Narrowing Conversion)**.

---

# 2. Promotion

Promotion occurs when a smaller data type is converted into a larger data type.

No information is lost.

### Example

```c
#include <stdio.h>

int main() {

    float a = 8;

    printf("%.1f", a);

    return 0;
}
```

Output

```
8.0
```

### Explanation

- `8` is an **int** value.
- `a` is a **float** variable.
- The compiler converts `8` into `8.0`.
- No data is lost.

This process is called **Promotion (Widening Conversion)**.

---

# Comparison

| Demotion | Promotion |
|----------|-----------|
| Large data type → Small data type | Small data type → Large data type |
| Data may be lost | No data loss |
| Example: `int a = 3.5;` | Example: `float a = 8;` |
| Result: `3` | Result: `8.0` |

---

# Examples

### Example 1

```c
int a = 7.9;
```

Stored value:

```
7
```

---

### Example 2

```c
float b = 15;
```

Stored value:

```
15.0
```

---

### Example 3

```c
char c = 65;
```

Stored value:

```
'A'
```

---

# Important Points

- `int` cannot store decimal values.
- Assigning a float to an int removes the fractional part.
- Assigning an int to a float adds `.0`.
- Promotion is generally safe because no information is lost.
- Demotion may lead to loss of precision.

---

# Summary

- **Demotion:** `float → int` (possible data loss)
- **Promotion:** `int → float` (no data loss)

Examples:

```c
int a = 3.5;    // Stores 3 (Demotion)

float b = 8;    // Stores 8.0 (Promotion)
```
*/