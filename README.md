42 School C++ Piscine: Object-Oriented Programming Foundations

📚 Project Overview
This repository contains the solutions for C++ Modules 00–09, part of the 42 school's C++ curriculum.
The main objective is to master Object-Oriented Programming (OOP) concepts, deepen C++ language knowledge, and practice writing high-quality, modular, and maintainable C++ code according to strict coding standards.

Each module introduces new features of C++, progressing from basic syntax to advanced topics like templates, multiple inheritance, type conversion, and the standard library.

🛠️ Module Summaries
🧩 Module 00 – Basics of C++
Compiling, namespaces, and basic class structures

Member functions, accessors, and constructors

Understanding memory allocation and instances

🧩 Module 01 – Memory and References
Heap vs Stack allocation

new, delete, pointers and references

Creating a dynamic class object

Understanding shallow vs deep copies

🧩 Module 02 – Ad-Hoc Polymorphism
Overloading operators

Creating a fixed-point number class (Fixed)

Understanding copy constructors and assignment operators

🧩 Module 03 – Inheritance
Basic inheritance (IS-A relationship)

Introduction to polymorphism

Abstracting classes and code reusability

🧩 Module 04 – Polymorphism and Abstract Classes
Pure virtual functions

Dynamic dispatch (virtual functions)

Interfaces and abstract class hierarchies

🧩 Module 05 – Exceptions
C++ exception handling (try, catch, throw)

Custom exceptions

Proper resource management during exceptions

🧩 Module 06 – Casting
Static cast, dynamic cast, reinterpret cast, const cast

Downcasting and upcasting in polymorphic hierarchies

Understanding and using dynamic_cast safely

🧩 Module 07 – Templates
Function templates and class templates

Templating algorithms

Implementing generic containers and utilities

🧩 Module 08 – STL and Algorithms
Introduction to Standard Template Library (STL)

Using vector, list, map, set, and iterators

Implementing custom algorithms (easyfind, span, etc.)

🧩 Module 09 – Containers and More Algorithms
Advanced usage of deque, stack, queue

Building a program with more complex STL usage

Understanding the importance of time complexity

⚙️ How to Compile and Run
Each module contains its own directory and its own Makefile.

Example:

bash
cd moduleXX/
make
./program
Or manually:

bash
c++ -Wall -Wextra -Werror -std=c++98 *.cpp -o program
./program
The coding style follows strict 42 Norminette rules for C++.

Most modules must compile under C++98 standard unless stated otherwise.

🧱 Project Structure
Each module typically includes:

src/ (source files)

includes/ (header files)

Makefile

Example main files for testing

🧹 Coding Rules
No memory leaks (checked with valgrind)

No usage of std::cout without understanding

Proper use of const correctness

Smart resource management (RAII principles)

Proper class design and clear header/source separation

✍️ Authors
Zhenya Karapetyan - Zkarape

🏆 Acknowledgements
42 Network

ISO C++ Standards Documentation

Stack Overflow, cppreference.com, and C++ community tutorials

📜 License
This project is for educational purposes under the 42 Network guidelines.
