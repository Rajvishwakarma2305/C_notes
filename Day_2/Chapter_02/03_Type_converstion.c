/*
# Type Conversion in C (Easy Notes)

## What is Type Conversion?

Type conversion means changing one data type into another.

The C compiler can do this automatically when needed.

Example:

```c
int a = 3.5;
```

Here, `3.5` is a float, but `a` is an int.

The decimal part is removed.

Output:

```
a = 3
```

This is called **Demotion**.

---

## Demotion (Large → Small)

When a larger data type is stored in a smaller data type.

**Data may be lost.**

Example:

```c
int a = 9.8;
```

Stored value:

```
9
```

---

## Promotion (Small → Large)

When a smaller data type is stored in a larger data type.

**No data is lost.**

Example:

```c
float a = 8;
```

Stored value:

```
8.0
```

---

# Quick Quiz

```c
int k = 3.0 / 9;
```

### Step 1

`3.0` is a float.

So `9` becomes `9.0`.

```
3.0 / 9.0
```

### Step 2

Perform the division.

```
3.0 / 9.0 = 0.333333...
```

### Step 3

Store the result in `k`.

```c
int k;
```

`int` cannot store decimal values.

So the decimal part is removed.

```
0.333333...
      ↓
      0
```

### Final Answer

```c
k = 0;
```

---

## Another Example

```c
float x = 10 / 4;
```

Calculation:

```
10 / 4 = 2
```

Since both numbers are integers, integer division happens first.

Then:

```
2 → 2.0
```

Output:

```
2.0
```

---

## If you want decimal answer

```c
float x = 10.0 / 4;
```

Output:

```
2.5
```

---

# Memory Trick

```
Float → Int
Decimal removed
(Data Loss)
Example:
3.9 → 3
```

```
Int → Float
.0 is added
(No Data Loss)
Example:
8 → 8.0
```

---

# Remember

- `int` stores only whole numbers.
- `float` stores decimal numbers.
- `float → int` = Demotion (data may be lost).
- `int → float` = Promotion (no data loss).
- `int / int` gives an integer result.
- If at least one number is a `float`, the result is a `float`.

---

# Summary

| Expression | Result |
|------------|--------|
| `int a = 3.8;` | `3` |
| `float b = 8;` | `8.0` |
| `10 / 4` | `2` |
| `10.0 / 4` | `2.5` |
| `int k = 3.0 / 9;` | `0` |
*/