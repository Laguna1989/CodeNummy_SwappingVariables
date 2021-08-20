# Overview

This is a Code Nummy about swapping variables. Please check out the
other [Code Nummies](https://github.com/Laguna1989/CodeNummies_Overview).

# Exercise

Swapping variables is a common task in many programs. There are multiple ways to perform variable swapping and it is
good to know about them.

* **Note**: Some of the solutions might take some creativity.
* **Note**: While it is good to know about the different possible solutions, it is important when not to use them.

## Swapping with a temporary

This is the standard swap algorithm taught in every textbook.

Benefits:

* Works for every type
* Works in most programming languages
* Easy to understand

Drawbacks

* Temporary variable needed

## Swapping with language features

### C++

Use the functionality provided by the standard library. See this stack
overflow [answer](https://stackoverflow.com/questions/20807938/stdswap-vs-stdexchange-vs-swap-operator).

* std::swap [cppreference.com](https://en.cppreference.com/w/cpp/algorithm/swap)
* std::exchange [n3668](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3668.html)

### Python

x, y = y, x

Benefits:

* Works for every type
* Very easy to understand
* great semantics

Drawbacks:

* Language specific

## Swapping with addition/subtraction

What if I tell you that you can swap two numbers without the use of a temporary, but just by using addition/subtraction?
If you do not know the solution, this might be quite some fun to find out.

Benefits:

* No temporary needed
* Works in most programming languages

Drawbacks:

* Not intuitive to understand
* Bad semantics
* Only works for number types

## Swapping with multiplication/division/xor

If you dislike addition/subtraction for some reason, the same approach is possible with multiplication, division.

Benefits:

* No temporary needed
* Works in most programming languages

Drawbacks:

* Not intuitive to understand
* Bad semantics
* Only works for number types
* multiplication/division are slow
* Won't work if one of the values is zero

# Brain teasers

* Out of the four ways to swap variables, which one would you prefer when? And Why?
* Can you come up with another (fith) solution, which uses the xor operation?

# Further Reading

* [www.programiz.com swapping variables in python](https://www.programiz.com/python-programming/examples/swap-variables)
