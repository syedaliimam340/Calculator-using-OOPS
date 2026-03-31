# Calculator-using-OOPS

# 📘 Hybrid Calculator in C++

## 📌 Overview

This project is a **Hybrid Calculator** implemented in C++. It combines:

* **Basic Calculator Operations** (Addition, Subtraction, Multiplication, Division)
* **Scientific Calculator Functions** (Square Root, Power, Natural Log, Cosine)

The program uses **Object-Oriented Programming (OOP)** concepts like:

* Classes
* Inheritance
* Encapsulation

---

## 🧱 Class Structure

### 1️⃣ calculator (Base Class)

Handles basic arithmetic operations.

#### 🔹 Data Members:

* `int n` → Number of operands
* `vector<double> operands` → Stores input values

#### 🔹 Member Functions:

* `getno()`
  Takes input for number of operands and their values

* `perform_addition()`
  Adds all operands

* `perform_subtraction()`
  Subtracts operands sequentially

* `perform_division()`
  Divides operands with zero-check

* `perform_multiplication()`
  Multiplies all operands

---

### 2️⃣ scientific_calculator

Handles advanced mathematical functions.

#### 🔹 Member Functions:

* `square_root()`
  Calculates square root using `sqrt()`

* `power()`
  Calculates power using `pow(base, exponent)`

* `naturallog()`
  Computes natural logarithm using `log()`

* `cosine()`
  Calculates cosine (degrees → radians conversion)

---

### 3️⃣ hybrid (Derived Class)

```cpp
class hybrid: public calculator, public scientific_calculator
```

This class inherits from both:

* `calculator`
* `scientific_calculator`

👉 This is an example of **Multiple Inheritance**.

---

## ⚙️ How the Program Works

1. Menu is displayed:

```
1. Addition
2. Subtraction
3. Division
4. Multiplication
5. Square Root
6. Power
7. Natural Log
8. Cosine
9. Exit
```

2. User selects an option (1–9)

3. Based on choice:

   * Basic operations → multiple operands input
   * Scientific operations → single input

4. Result is displayed

5. Program repeats until Exit

---

## 🔁 Input Validation

* Ensures valid choice (1–9)
* Prevents division by zero:

```cpp
while(operands[i]==0)
```

---

## 📐 Concepts Used

### ✅ Vectors

```cpp
vector<double> operands;
```

### ✅ Multiple Inheritance

```cpp
class hybrid: public calculator, public scientific_calculator
```

### ✅ Loops

Used for input, calculations, and menu repetition

### ✅ Math Library (`<cmath>`)

* `sqrt()` → Square root
* `pow()` → Power
* `log()` → Natural log
* `cos()` → Cosine

---

## ⚠️ Limitations

* No handling for:

  * Negative input in `sqrt()`
  * Invalid input for `log()`
* Console-based only
* No calculation history

---

## 🚀 Improvements

* Add more functions (sin, tan, factorial)
* GUI version
* Better error handling

---

## ▶️ How to Run

### Compile:

```bash
g++ calculator.cpp -o calculator
```

### Run:

```bash
./calculator
```

---

## 📊 Example

```
Enter your Choice: 1
Enter number of operands: 3
Enter operand no 1: 5
Enter operand no 2: 3
Enter operand no 3: 2

Sum of operands = 10
```

---

## 🎯 Conclusion

This project demonstrates:

* Basic + Scientific Calculator integration
* Use of OOP in C++
* Multiple inheritance

---
