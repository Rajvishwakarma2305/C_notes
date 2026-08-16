/*
# LOGICAL OPERATORS IN C

Logical operators are used to combine or modify conditions.

They return:

- **1 (True)**
- **0 (False)**

## Types of Logical Operators

| Operator | Meaning |
|----------|---------|
| `&&` | AND |
| `||` | OR |
| `!` | NOT |

---

## 1. AND (`&&`)

Returns **True** only if **both conditions are True**.

```c
if(a > 5 && b < 10)
```

---

## 2. OR (`||`)

Returns **True** if **at least one condition is True**.

```c
if(a > 5 || b < 10)
```

---

## 3. NOT (`!`)

Reverses the result.

```c
!(a > b)
```

If the condition is True, it becomes False, and vice versa.

---

## Truth Table

| A | B | A && B | A \|\| B |
|---|---|---------|----------|
| 0 | 0 | 0 | 0 |
| 0 | 1 | 0 | 1 |
| 1 | 0 | 0 | 1 |
| 1 | 1 | 1 | 1 |

### NOT (`!`)

| A | !A |
|---|----|
| 0 | 1 |
| 1 | 0 |

---

## Example

```c
#include <stdio.h>

int main()
{
    int a = 10, b = 20;

    printf("%d\n", a < b && b > 10);
    printf("%d\n", a > b || b > 10);
    printf("%d\n", !(a > b));

    return 0;
}
```

### Output

```
1
1
1
```

---

## Summary

- `&&` → True only when **both** conditions are True.
- `||` → True if **at least one** condition is True.
- `!` → Reverses the result (True ↔ False).
- Used in `if`, `while`, and other conditional statements.
*/