/*
==========================================
        SWITCH CASE IN C (HINGLISH)
==========================================

------------------------------------------
1. What is Switch Case?
------------------------------------------

Switch ek decision making statement hai.

Jab hume kisi variable ki EXACT value ke basis par
alag-alag code execute karna ho tab switch use karte hain.

Simple Language:

Ek variable ki value dekho
↓
Uske according ek particular block execute karo.

Example:

1 -> Add
2 -> Delete
3 -> Search
4 -> Exit

Agar user 3 enter kare to sirf Search wala code chalega.

-------------------------------------------------
2. Why do we need Switch?
-------------------------------------------------

Without Switch

if(choice == 1)
{
    ...
}
else if(choice == 2)
{
    ...
}
else if(choice == 3)
{
    ...
}
else if(choice == 4)
{
    ...
}

Problems:
✔ Code bada ho jata hai.
✔ Read karna difficult hota hai.

With Switch

switch(choice)
{
    case 1:
        ...
        break;

    case 2:
        ...
        break;

    case 3:
        ...
        break;
}

Readable aur clean code.

-------------------------------------------------
3. Syntax
-------------------------------------------------

switch(expression)
{
    case value1:
        // code
        break;

    case value2:
        // code
        break;

    default:
        // code
}

-------------------------------------------------
4. Understanding Every Keyword
-------------------------------------------------

switch

Ye variable ko check karta hai.

Example

switch(choice)

---------------------------------

case

Har possible value ka ek case hota hai.

case 1:

Means

"Agar value 1 hai to ye code execute karo."

---------------------------------

break

Break switch se bahar nikal deta hai.

Agar break nahi likha to next case bhi execute hoga.

---------------------------------

default

Agar koi bhi case match nahi hua to default execute hota hai.

Example

default:
printf("Invalid Choice");

-------------------------------------------------
5. Flow of Switch
-------------------------------------------------

User Input

↓

switch(variable)

↓

Case Match?

↓

YES

↓

Execute Code

↓

break

↓

End

NO

↓

default

↓

End

-------------------------------------------------
6. Example
-------------------------------------------------

Input

choice = 2

switch(choice)

case 1 ❌

case 2 ✅

Output

Second Option

-------------------------------------------------
7. Fall Through
-------------------------------------------------

Example

case 1:
printf("One");

case 2:
printf("Two");

case 3:
printf("Three");

Input

1

Output

One
Two
Three

Reason

Break nahi likha.

Program next cases bhi execute karta gaya.

Isko Fall Through bolte hain.

-------------------------------------------------
8. Data Types Allowed
-------------------------------------------------

Mostly

✔ int

✔ char

Example

switch(grade)

case 'A':

case 'B':

-------------------------------------------------
9. Where do we use Switch?
-------------------------------------------------

✔ ATM Machine

1 Balance

2 Withdraw

3 Deposit

4 Exit

----------------------------

✔ Hospital Management

1 Add Patient

2 Search Patient

3 Delete Patient

4 Display Patients

5 Exit

----------------------------

✔ Restaurant Menu

1 Pizza

2 Burger

3 Sandwich

----------------------------

✔ Calculator

1 Addition

2 Subtraction

3 Multiplication

4 Division

-------------------------------------------------
10. When NOT to use Switch?
-------------------------------------------------

Wrong

age > 18

marks >= 90

salary > 40000

Reason

Switch sirf EXACT VALUE compare karta hai.

Aise cases me if-else use karo.

-------------------------------------------------
11. Common Beginner Mistakes
-------------------------------------------------

❌ break bhool jana

❌ Duplicate case values

❌ case ke andar variable declare karke confuse hona

❌ default na likhna (optional but recommended)

-------------------------------------------------
12. Switch vs If Else
-------------------------------------------------

Switch

✔ Exact value compare karta hai.

✔ Menu driven programs ke liye best.

✔ Code readable hota hai.

If Else

✔ Complex conditions handle karta hai.

✔ > < >= <= && || sab use kar sakte hain.

-------------------------------------------------
13. Programming Thinking
-------------------------------------------------

Code likhne se pehle ye questions pucho.

1.

Decision kis basis par ho raha hai?

Exact Value?

↓

Switch

Condition?

↓

If Else

---------------------------------

2.

Kitne options hain?

2-3

↓

if-else

Bahut saare fixed options

↓

switch

---------------------------------

3.

User kya input dega?

Number?

Character?

Menu?

Ye socho pehle.

Code baad me likho.

-------------------------------------------------
14. Golden Rule
-------------------------------------------------

IF

Condition check karni ho.

Example

age > 18

marks >= 40

salary < 50000

---------------------------------

SWITCH

Exact value compare karni ho.

Example

1

2

3

4

Menu Programs

-------------------------------------------------
15. Shortcut
-------------------------------------------------

Switch

↓

Exact Value

↓

Matching Case

↓

Execute

↓

Break

↓

End

==========================================
END OF NOTES
==========================================
*/