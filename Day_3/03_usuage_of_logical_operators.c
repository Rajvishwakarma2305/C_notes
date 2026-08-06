/*
# USAGE OF LOGICAL OPERATORS IN C

Logical operators are used to combine multiple conditions into a single expression. They make the code shorter, cleaner, and easier to read.

---

## 1. AND (`&&`)

The **AND (`&&`)** operator returns **True (1)** only when **both conditions are True**.

### Truth Table

| Condition 1 | Condition 2 | Result |
|-------------|-------------|--------|
| 1 | 0 | 0 (False) |
| 0 | 0 | 0 (False) |
| 0 | 1 | 0 (False) |
| 1 | 1 | 1 (True) |

### Example

```c
if(age >= 18 && age <= 60)
{
    printf("Eligible");
}
```

---

## 2. OR (`||`)

The **OR (`||`)** operator returns **True (1)** if **at least one condition is True**.

### Truth Table

| Condition 1 | Condition 2 | Result |
|-------------|-------------|--------|
| 1 | 0 | 1 (True) |
| 1 | 1 | 1 (True) |
| 0 | 1 | 1 (True) |
| 0 | 0 | 0 (False) |

### Example

```c
if(age < 18 || age > 60)
{
    printf("Not Eligible");
}
```

---

## 3. NOT (`!`)

The **NOT (`!`)** operator reverses the result of a condition.

- True → False
- False → True

### Examples

```c
!(3 == 3)      // False (0)
!(3 > 30)      // True (1)
```

---

# Why Use Logical Operators?

Without logical operators, checking multiple conditions requires nested `if` statements, which increase the level of indentation and reduce code readability.

### Without Logical Operators

```c
if(age >= 18)
{
    if(age <= 60)
    {
        printf("Eligible");
    }
}
```

### With Logical Operators

```c
if(age >= 18 && age <= 60)
{
    printf("Eligible");
}
```

Using logical operators makes programs **shorter, cleaner, and easier to understand**.

---

# Summary

- `&&` (AND) → True only when **both** conditions are True.
- `||` (OR) → True when **at least one** condition is True.
- `!` (NOT) → Reverses the result of a condition.
- Logical operators reduce nested `if` statements and improve code readability.
*/