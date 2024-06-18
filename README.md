# C++ Object-Oriented Programming (OOP) Concepts

Welcome to the C++ OOP repository! Here you'll find explanations, questions, and example programs covering fundamental Object-Oriented Programming concepts in C++.

## Table of Contents

1. [What is Object-Oriented Programming (OOP) in C++?](#1-what-is-object-oriented-programming-oop-in-c)
2. [Explain the four pillars of OOP in C++.](#2-explain-the-four-pillars-of-oop-in-c)
3. [What is a class in C++?](#3-what-is-a-class-in-c)
4. [How do you define a class in C++?](#4-how-do-you-define-a-class-in-c)
5. [What is an object in C++?](#5-what-is-an-object-in-c)
6. [How do you create an object in C++?](#6-how-do-you-create-an-object-in-c)
7. [What is encapsulation in C++?](#7-what-is-encapsulation-in-c)
8. [Give an example of encapsulation in C++](#8-give-an-example-of-encapsulation-in-c)
9. [What is inheritance in C++?](#9-what-is-inheritance-in-c)
10. [Explain single inheritance in C++](#10-explain-single-inheritance-in-c)
11. [What is multiple inheritance in C++?](#11-what-is-multiple-inheritance-in-c)
12. [What is constructor overloading in C++?](#12-what-is-constructor-overloading-in-c)
13. [Explain function overloading in C++](#13-explain-function-overloading-in-c)
14. [What is operator overloading in C++?](#14-what-is-operator-overloading-in-c)
15. [What is dynamic polymorphism in C++?](#15-what-is-dynamic-polymorphism-in-c)
16. [Explain static polymorphism in C++](#16-explain-static-polymorphism-in-c)
17. [What are virtual functions in C++?](#17-what-are-virtual-functions-in-c)
18. [What is pure virtual function in C++?](#18-what-is-pure-virtual-function-in-c)
19. [How do you achieve runtime polymorphism in C++?](#19-how-do-you-achieve-runtime-polymorphism-in-c)
20. [What is the difference between `public`, `private`, and `protected` access specifiers in C++?](#20-what-is-the-difference-between-public-private-and-protected-access-specifiers-in-c)
21. [What is a friend function in C++?](#21-what-is-a-friend-function-in-c)
22. [Explain the `this` pointer in C++](#22-explain-the-this-pointer-in-c)
23. [What is a destructor in C++?](#23-what-is-a-destructor-in-c)
24. [What is a copy constructor in C++?](#24-what-is-a-copy-constructor-in-c)
25. [Explain the concept of shallow copy and deep copy in C++](#25-explain-the-concept-of-shallow-copy-and-deep-copy-in-c)
26. [What is a virtual destructor in C++?](#26-what-is-a-virtual-destructor-in-c)
27. [What are access control modifiers in C++?](#27-what-are-access-control-modifiers-in-c)
28. [Explain the `const` keyword in C++](#28-explain-the-const-keyword-in-c)
29. [What is the difference between `struct` and `class` in C++?](#29-what-is-the-difference-between-struct-and-class-in-c)
30. [What is the role of constructors in C++?](#30-what-is-the-role-of-constructors-in-c)
31. [What is a static member in C++?](#31-what-is-a-static-member-in-c)
32. [Explain the `static` keyword in C++](#32-explain-the-static-keyword-in-c)
33. [What is a namespace in C++?](#33-what-is-a-namespace-in-c)

---

## 1. What is Object-Oriented Programming (OOP) in C++?
Object-Oriented Programming (OOP) is a paradigm that organizes software design around data, or objects, rather than actions and logic. It emphasizes concepts like encapsulation, inheritance, polymorphism, and abstraction.

## 2. Explain the four pillars of OOP in C++.
- **Encapsulation**: Bundling data (attributes) and methods (functions) that operate on the data into a single unit (class).
- **Abstraction**: Simplifying complex systems by modeling classes at appropriate levels of detail.
- **Inheritance**: Creating new classes (derived classes) based on existing classes (base classes), inheriting their attributes and behaviors.
- **Polymorphism**: Providing a single interface to entities of different types, allowing for flexibility and code reusability.

## 3. What is a class in C++?
A class in C++ is a blueprint for creating objects. It defines properties (data members) and behaviors (member functions) that all objects of the class will have.

## 4. How do you define a class in C++?
```cpp
// Example of defining a class in C++
class MyClass {
private:
    int myVar;  // Data member

public:
    void setMyVar(int value) {  // Member function
        myVar = value;
    }

    int getMyVar() {
        return myVar;
    }
};

