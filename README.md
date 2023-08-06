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


   **9.	Explain the difference between public, private, and protected inheritance.**

   - **Public Inheritance:**
      - Public members of the base class become public members of the derived class.
      - Protected members of the base class become protected members of the derived class.
      - Private members of the base class are not directly accessible in the derived class.

   - **Private Inheritance:**
      - All members of the base class become private members of the derived class.
      - Members are not directly accessible in the derived class or outside of it.
      - Used for "has-a" relationships or reusing implementation.

   - **Protected Inheritance:**
      - All members of the base class become protected members of the derived class.
      - Members are accessible within the derived class and its derived classes but not outside.
      - Relatively uncommon, used for controlled access to derived classes.

   **10.	What is Polymorphism, and how is it achieved in C++?**

   - Polymorphism means that different classes can be treated as if they belong to the same class. It allows flexible and extensible code by using functions that can work differently with different types of objects.

   - Polymorphism is achieved through function overloading and overriding.
   


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

   **12.	Explain Operator Overloading with an example.**

   - Operator overloading is a C++ feature to redefine the behavior of operators for user-defined data types.
   - It allows using the same operator with different classes, providing a more intuitive syntax.
   - Special member functions are defined for each operator to specify its behavior with class objects.
   - Operators like +, -, *, etc., can be redefined for custom classes.
   - Operator overloading improves code readability and reusability.

```C++ 
#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;
public:
    // Constructor with default values 0, 0
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }
    // Overloading the '+' operator to add two Complex objects
    Complex operator+(Complex const& obj) {
        Complex res;
        res.real = real + obj.real;   // Add real parts
        res.imag = imag + obj.imag;   // Add imaginary parts
        return res;
    }
    // Function to print the Complex number
    void print() {
        cout << real << " + i" << imag << '\n';
    }
};

int main() {
    // Create two Complex objects
    Complex c1(10, 5), c2(2, 4);

    // Adding two Complex numbers using the overloaded '+' operator
    Complex c3 = c1 + c2;

    // Displaying the result of the addition
    cout << "Result: ";
    c3.print(); // Output: Result: 12 + i9
    return 0;
}
```

   **13.	What is Dynamic Polymorphism and how is it achieved using Virtual Functions?**

   - Feature in object-oriented programming.
   - Determines the correct function at runtime based on the actual object type.
   - Achieved using virtual functions and pointers/references to base class objects.
   - Enables flexibility and extensibility in the code.
   - Decision made during program execution, not at compile time.
   - Essential for creating versatile object-oriented designs.
