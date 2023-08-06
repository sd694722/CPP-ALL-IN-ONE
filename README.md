# CPP-ALL-IN-ONE

## All C++ Programs

### C++ OOPS 50 Questions with Answers

**1. What is Object-Oriented Programming (OOP)?**

   - Object-Oriented Programming (OOP) introduces objects and classes to C++.

   -	Objects represent real-world entities, encapsulating data and behaviour.

   -	OOP emphasizes inheritance, polymorphism, abstraction, and encapsulation.

   -	It enhances code reusability, modularity, and easier maintenance.


**2. What are the four pillars of OOP?**

   - Encapsulation

   - Abstraction

   - Inheritance

   - Polymorphism


**3. Define Class and Object in C++.** <br>
- ***Class:***<br>
_Class in C++ is the building block that leads to Object-Oriented programming._
_It is a user-defined data type, which holds its own data members and member functions._


- ***Object:***<br>
_Object is an entity that have some properties, state and behaviour. It is an instance of a Class._
_To use the data and access functions defined in the class, we need to create objects._
_When a class is defined, no memory is allocated but when an object is created memory is allocated._


**4.	Explain the concept of Abstraction in OOP.** <br>

   - Hides internal implementation details.

   - Defines interfaces for user interaction.

   - Promotes code modularity and reuse.

   - Enhances data security and maintainability.


**5.	What is Encapsulation, and how is it achieved in C++?**

- ***Encapsulation*** _in OOP is bundling data and methods within a class, hiding internal details from the outside.Encapsulation is achieved using access specifiers (public, private, protected) to control member visibility, ensuring data security._

**6.	How does Inheritance promote code reusability?** <br>
- _Inheritance promotes code reusability by allowing a class to inherit properties and behaviours from another class, ***reducing duplication***, and ***enhancing maintainability***._

**7.	Differentiate between a base class and a derived class.** <br>

   - **Base Class:**
      - Parent class.
      - Provides common features.
      - Blueprint for derived classes.
   - **Derived Class:**
      - Child class.
      - Inherits features from the base class.
      - Can have additional specific features.

   **8.	What are access specifiers in C++ (public, private, protected)?**

   - **public:** Members are accessible from anywhere.
   - **private:** Members are only accessible within the class itself.
   - **protected:** Members are accessible within the class and its derived classes.

   **11.	Define Function Overloading and provide an example.**

   - Function Overloading allows multiple functions with the same name based on different parameters.
   - Differentiates functions by number or type of parameters.
   - Improves code readability and reusability.
   - Compiler determines which function to call based on arguments passed during the function call.
   - A feature in C++ enabling polymorphism.

### CODE

```C++
#include <iostream>
// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to add two floating-point numbers
float add(float a, float b) {
    return a + b;
}

int main( ) {
    int result1 = add(5, 10);        // Calls the int version of add: 5 + 10 = 15
    float result2 = add(3.5f, 2.1f); // Calls the float version of add: 3.5 + 2.1 = 5.6
    std::cout << "Result 1: " << result1 << std::endl; // Output: Result 1: 15
    std::cout << "Result 2: " << result2 << std::endl; // Output: Result 2: 5.6
    return 0;
}
```


