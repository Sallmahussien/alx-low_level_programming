# Project: 0x08. C - Recursion

## Resources

#### Read or watch:

* [0x08. Recursion, introduction](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2021/1/2818ba6f14f644b871dcbd746925fa15b8cd5937.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20240412%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20240412T195527Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=539867ed62a16a136686bd87f3ca88782e1ad1d5d68af4fe9bfe62fa2c1de3b3)
* [What on Earth is Recursion?](https://www.youtube.com/watch?v=Mv9NEXX1VHc)
* [C - Recursion](https://www.tutorialspoint.com/cprogramming/c_recursion.htm)
* [C Programming Tutorial 85, Recursion pt.1](https://www.youtube.com/watch?v=XGxbXMP6k8k)
* [C Programming Tutorial 86, Recursion pt.2](https://www.youtube.com/watch?v=7XiIS6HobNs)
## Learning Objectives

### General

* What is recursion
* How to implement recursion
* In what situations you should implement recursion
* In what situations you shouldn’t implement recursion

## Tests

* [tests](./tests): Folder of test files.

## Helper File

* [_putchar.c](./_putchar.c): C function that writes a character to `stdout`.


## Header File 

* [main.h](main.h): Header file containing prototypes for all functions written in the project.

| File                      | Prototype                             |
| ------------------------- | ------------------------------------- |
| `0-puts_recursion.c`      | `void _puts_recursion(char *s);`      |
| `1-print_rev_recursion.c` | `void _print_rev_recursion(char *s);` |
| `2-strlen_recursion.c`    | `int _strlen_recursion(char *s);`     |
| `3-factorial.c`           | `int factorial(int n);`               |
| `4-pow_recursion.c`       | `int _pow_recursion(int x, int y);`   |
| `5-sqrt_recursion.c`      | `int _sqrt_recursion(int n);`         |
| `6-is_prime_number.c`     | `int is_prime_number(int n);`         |
| `7-is_palindrome.c`       | `int is_palindrome(char *s);`         |
| `100-wildcmp.c`           | `int wildcmp(char *s1, char *s2);`    |

## Tasks

* **0. She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget**
  * [0-puts_recursion.c](./0-puts_recursion.c): C function that prints a string,
  followed by a new line.

* **1. Why is it so important to dream? Because, in my dreams we are together**
  * [1-print_rev_recursion.c](./1-print_rev_recursion.c): C function that prints
  a string in reverse.

* **2. Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange**
  * [2-strlen_recursion.c](./2-strlen_recursion.c): C function that returns the
  length of a string.

* **3. You mustn't be afraid to dream a little bigger, darling**
  * [3-factorial.c](./3-factorial.c): C function that returns the factorial of
  a given number.

* **4. Once an idea has taken hold of the brain it's almost impossible to eradicate**
  * [4-pow_recursion.c](./4-pow_recursion.c): C function that returns the value of
  a number `x` raised to the value of an input `y`.
    * If `y` is less than `0`, the function returns `-1`.

* **5. Your subconscious is looking for the dreamer**
  * [5-sqrt_recursion.c](./5-sqrt_recursion.c): C function that returns the natural square
  root of a number.
    * If the number does not have a natural square root, the function returns `-1`.

* **6. Inception. Is it possible?**
  * [6-is_prime_number.c](./6-is_prime_number.c): C function that checks in an
  integer is a prime number.
    * If the integer is prime, the function returns `1`.
    * Otherwise, the function returns `0`.

* **7. They say we only use a fraction of our brain's true potential. Now that's when we're awake. When we're asleep, we can do almost anything**
  * [100-is_palindrome.c](./7-is_palindrome.c): C function that checks if a string is
  a palindrome.
    * If the string is a palindrome, the function returns `1`.
    * Otherwise, the function returns `0`.

* **8. Inception. Now, before you bother telling me it's impossible...**
  * [101-wildcmp.c](./100-wildcmp.c): C function that compares two strings
  `s1` and `s2`.
    * `s2` can contain the special character `*`.
    * If the strings can be considered identical, the function returns `1`.
    * Otherwise, the function returns `0`.