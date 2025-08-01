# Freelancer Rates

Welcome to Freelancer Rates on Exercism's C++ Track.
If you need help running the tests or submitting your code, check out `HELP.md`.
If you get stuck on the exercise, check out `HINTS.md`, but try and solve it without using those first :)

## Introduction

The built-in number types in C++ can be divided into integers and floating points.
Integers are whole numbers like `0`, `691`, or `-2`.
Floating point numbers are numbers with a decimal point like `6.02214076`, `0.1`, or `-1.616`.

## Integers
The following example shows the declaration and initialization of four different variables 



```cpp
int m_morales{9241};              // base 10: 0-9
int a_apaec{0x24CD};              // base 16: 0-9 and A-F
int m_gargan{0b10010000011001};   // base  2: 0-1
int b_reilly{022031};             // base  8: 0-7
                                  // Leading with a 0 not the letter o.
```

When you assign a value to an `int` variable, you can do so directly with a literal.
A literal is a hard-coded number like `9241`.
There are different integer literals for several bases of the representation.
Decimal integer literals are the most common and use the digits `0` to `9`.
By adding a special prefix, like `0x`, it is possible to use other bases.
The example above shows the number `9241` in its four representations and prefixes.
All variables are initialized to the same value.

For more details on the different representation systems, take a look at [a small tutorial][cpp_numerical_bases].

You can use an apostrophe to separate digits for easier readability.
`9'241` is the same as `0b0100'100'0001'1001` or `92'4'1`.

## Floating-Point Numbers

The floating-point literals come in two flavors. 
In addition to the intuitive `0.0024` it is possible to use its scientific notation `2.4e-3`.
The most common floating-point type is `double`.

## Arithmetic

C++ supports `+`, `-`, `*`, `/`, `(` and `)` and `%` to form expressions.
The result from the operation between two integers is also an integer.
`5 / 2` will return `2`.
When one of the involved types is a floating-point type, the result will also be of a floating-point.
`5.0 / 2` and `5 / 2.0` will return `2.5`.
`%` is the remainder operator and will return the remainder of an integer division: `5%3` is `2`.

## Assignment operator

The assignment operator assigns a variable with a literal.
Always takes place from right to left, and never the other way around.

```cpp
int length = 5;
int width = 2;
length = width;
```

Here integer value `5` is assigned to the variable `length`.
Then integer value `2` is assigned to variable `width`.
Finally value of `width` is copied to the variable `length` and the earlier value `5` will be lost.
Consider also that we are only assigning the value of `width` to `length` at the moment of the assignment operation.
Therefore, if the value of `width` changes at a later moment, it will not affect the value taken by `length`.

Assignment operator can be combined with the other operators(arithmetic & bitwise) known as `compound assignment` operators `+=`, `-=`, `*=`, `/=`, `%=`.
These operators modify the current value of a variable by performing an operation on it.

```cpp
// we start with 0 people
int people{};
// we need 0 eggs
int eggs{}; 
// two people joined:
people += 2; 
// people is now 2
// let's add 3 eggs per person
eggs += 3 * people;
// eggs is now 6
```

Variables `people` & `eggs` are initialized to `0`.
Then, we add integer value `2` over the existing value `0` of the variable `people` and assign it back to `people`.
`people` becomes `2` now.
Later, we add `3` eggs for each person, which turns out to be `6` eggs in total.
Now add this `6` to existing value `0` of the variable `eggs` and assign it back to `eggs`.
`eggs` will be `6` now.
The equivalent expression would be `people = people + 2` and `eggs = eggs + (3 * people)`.


[cpp_numerical_bases]: https://cplusplus.com/doc/hex/

## Instructions

In this exercise, you'll be writing code to help a freelancer communicate with a project manager.
Your task is to provide a few utilities to quickly calculate daily and monthly rates, optionally with a given discount.

We first establish a few rules between the freelancer and the project manager:

- The daily rate is 8 times the hourly rate.
- A month has 22 billable days.

Sometimes, the freelancer is offering to apply a discount on their daily rate (for example for their most loyal customers or not-for-profit customers).

Discounts are modeled as fractional numbers representing percentages, for example, `25.0` (25%).

## 1. Calculate the daily rate given an hourly rate

Implement a function called `daily_rate` to calculate the daily rate given an hourly rate as a parameter.
The contract defines that a day has 8 billable hours.

```cpp
daily_rate(60)
// => 480.0
```

The returned daily rate should be of type `double`.

## 2. Calculate a discounted price

Implement a function `apply_discount` to calculate the price after a discount.
It should accept two parameters: the original price and the discount rate in percent.

```cpp
apply_discount(150, 10)
// => 135.0
```

The returned value should always be of type `double`, not rounded in any way.

## 3. Calculate the monthly rate, given an hourly rate and a discount

Implement a `monthly_rate` function to calculate the discounted monthly rate.
It should have two parameters, an hourly rate and the discount in percent.

```cpp
monthly_rate(77, 10.5)
// => 12130
```

The returned monthly rate should be rounded up (take the ceiling) to the nearest integer.

## 4. Calculate the number of complete workdays given a budget, hourly rate, and discount

Implement a function `days_in_budget` that takes a budget, an hourly rate, and a discount, and calculates how many complete days of work that covers.

```cpp
days_in_budget(20'000, 80, 11.0)
// => 35
```

The returned number of days should be rounded down (take the floor) to the next integer.

## Source

### Created by

- @vaeng