# CPP-ALL-IN-ONE
 All C++ Programs

 C++ OOPS 50 Questions with Answers

 1.	What is Object-Oriented Programming (OOP)?
Ans:
    o	Object-Oriented Programming (OOP) introduces objects and classes to C++.
    o	Objects represent real-world entities, encapsulating data and behaviour.
    o	OOP emphasizes inheritance, polymorphism, abstraction, and encapsulation.
    o	It enhances code reusability, modularity, and easier maintenance.

2.	What are the four pillars of OOP?
Ans: 
    o	Encapsulation
    o	Abstraction
    o	Inheritance
    o	Polymorphism

3.	Define Class and Object in C++.
Ans: 
    o	Class in C++ is the building block that leads to Object-Oriented programming. It is a user-defined data type, which holds its own data members and member functions.

    o	Object is an entity that have some properties, state and behaviour. It is an instance of a Class. To use the data and access functions defined in the class, we need to create objects. When a class is defined, no memory is allocated but when an object is created memory is allocated.

4.	Explain the concept of Abstraction in OOP.
Ans: 
    o	Hides internal implementation details.
    o	Defines interfaces for user interaction.
    o	Promotes code modularity and reuse.
    o	Enhances data security and maintainability.

5.	What is Encapsulation, and how is it achieved in C++?
Ans:
    o	Encapsulation in OOP is bundling data and methods within a class, hiding internal details from the outside. 
    o	In C++, encapsulation is achieved using access specifiers (public, private, protected) to control member visibility, ensuring data security.

6.	How does Inheritance promote code reusability?
Ans: Inheritance promotes code reusability by allowing a class to inherit properties and behaviours from another class, reducing duplication, and enhancing maintainability.

7.	Differentiate between a base class and a derived class.
Ans:
    •	Base Class:
    o	Parent class.
    o	Provides common features.
    o	Blueprint for derived classes.
    •	Derived Class:
    o	Child class.
    o	Inherits features from the base class.
    o	Can have additional specific features.

8.	What are access specifiers in C++ (public, private, protected)?
Ans:
    •	public: Members are accessible from anywhere.
    •	private: Members are only accessible within the class itself.
    •	protected: Members are accessible within the class and its derived classes.

9.	Explain the difference between public, private, and protected inheritance.
Ans: 
    •	Public Inheritance:
        o	Public members of the base class become public members of the derived class.
        o	Protected members of the base class become protected members of the derived class.
        o	Private members of the base class are not directly accessible in the derived class.

    •	Private Inheritance:
        o	All members of the base class become private members of the derived class.
        o	Members are not directly accessible in the derived class or outside of it.
        o	Used for "has-a" relationships or reusing implementation.

    •	Protected Inheritance:
    o	All members of the base class become protected members of the derived class.
    o	Members are accessible within the derived class and its derived classes but not outside.
    o	Relatively uncommon, used for controlled access to derived classes.

10.	What is Polymorphism, and how is it achieved in C++?
Ans:
    o	Polymorphism means that different classes can be treated as if they belong to the same class. It allows flexible and extensible code by using functions that can work differently with different types of objects.
    o	Polymorphism is achieved through function overloading and overriding.


11.	Define Function Overloading and provide an example.
Ans:
o	Function Overloading allows multiple functions with the same name based on different parameters.
o	Differentiates functions by number or type of parameters.
o	Improves code readability and reusability.
o	Compiler determines which function to call based on arguments passed during the function call.
o	A feature in C++ enabling polymorphism.

Code:
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

12.	Explain Operator Overloading with an example.
Ans:
    o	Operator overloading is a C++ feature to redefine the behavior of operators for user-defined data types.
    o	It allows using the same operator with different classes, providing a more intuitive syntax.
    o	Special member functions are defined for each operator to specify its behavior with class objects.
    o	Operators like +, -, *, etc., can be redefined for custom classes.
    o	Operator overloading improves code readability and reusability.
    
Code: 
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

13.	What is Dynamic Polymorphism and how is it achieved using Virtual Functions?
Ans:
    o	Feature in object-oriented programming.
    o	Determines the correct function at runtime based on the actual object type.
    o	Achieved using virtual functions and pointers/references to base class objects.
    o	Enables flexibility and extensibility in the code.
    o	Decision made during program execution, not at compile time.
    o	Essential for creating versatile object-oriented designs.

14.	What are Pure Virtual Functions and Abstract Classes?
15.	Can an object of an Abstract Class be created? Why or why not?
16.	Describe the difference between Compile-time Polymorphism and Runtime Polymorphism.
17.	What is the 'this' pointer? How is it used?
18.	What are constructors and destructors in C++?
19.	Define Default Constructor and Parameterized Constructor.
20.	What is a Copy Constructor, and when is it called?
21.	Explain the concept of Operator Overloading with the assignment operator (=).
22.	Define the Rule of Three in C++ and why it's essential.
23.	What is a Move Constructor and when is it used?
24.	What is a Destructor, and what is its purpose?
25.	Explain the difference between Shallow Copy and Deep Copy.
26.	How do you prevent copying objects in C++?
27.	What is the 'const' keyword in C++ and its significance?
28.	Describe the difference between 'const' member functions and 'const' objects.
29.	What are Static Members in a class?
30.	Explain Static Member Variables and Static Member Functions.
31.	Can a Static Member Function access non-static members of a class?
32.	What is the 'friend' keyword used for in C++?
33.	Describe how 'friend' functions work in C++.
34.	What are Inline Functions, and why are they used?
35.	Explain Name Resolution in C++ (ADL and Koenig Lookup).
36.	What are Namespace and its purpose in C++?
37.	Describe how to use the 'using' directive and 'using' declaration.
38.	What are Smart Pointers in C++? Why are they used?
39.	Explain the types of Smart Pointers (unique_ptr, shared_ptr, weak_ptr).
40.	What is RAII (Resource Acquisition Is Initialization)?
41.	What is a C++ Standard Template Library (STL)?
42.	Describe STL Containers and their characteristics.
43.	Explain STL Iterators and their types.
44.	What are STL Algorithms and their usage?
45.	How do you use 'std::for_each' and 'std::transform' algorithms?
46.	Describe C++ Exception Handling using 'try', 'catch', and 'throw' blocks.
47.	What is the 'std::exception' class, and how is it used?
48.	Explain how to create Custom Exception Classes in C++.
49.	What is a Lambda Expression in C++?
50.	Describe the use of Lambda Functions and their capture clauses.
