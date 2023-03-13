# CPP OOPS PRACTISE 

## Introduction
1. What are classes and objects? 
2. What are the contents of a class? 
3. Write short notes on properties of a class, methods of a class and members of a class. 

## Basic 
### Instructions 
- make a file 1-Basic.cpp in code folder
- for any code that has to be written, in this section, do it in the 1-Basic.cpp file only.

1. Create a class `Duck` with three properties and 1 method.
	2. then create object from that class using all the possible ways in a function `void createClass() {}`;
2. What is scope resolution operator? 
3. Declare a method `eat()` in the duck class and then define it outside the class.
4. What are access specifiers? List their types and functionality. 


## Constructor
1. What are constructors? 
2. What is the role of a constructor?
3. Is it necessary for a class to have a constructor? 
4. What does a constructor returns? 
5. Do all classes have a constructor? If yes, then what are the contents of it? 
6. When does the constructor executes itself? 
7. Can constructor be private? What happens if it is private? 
8. Can we make an object of a class which have a private constructor? 
9. What is a default constructor? 
   1.  What is the contents of a default constructor? 
10. What is a parameterized constructor? 
11. What is constructor overloading? 
12. Refer below and code in Complex.cpp

```
class Complex {
	public: 
		float real; 
		float imaginary;
};

// create three constructor,
// 1 -> initializes real and imaginary with two input value for them respectively
// 2 -> initialized real and imaginary with the values of another object of the same Complex class as input
// 3 -> does the above with the pointer of the object.
```

## Access Specifiers 
1. What are access specifiers? 
2. Why do we need access specifiers? 
3. Where are access specifiers used? 
4. Demonstrate the working of the access specifiers with example in Specifiers.cpp.
5. Explain some reasons why protected specifier was made? 

## Destructors 
1. What are destructors? 
2. Do all classes have a destructor? 
3. What is the content of a destructor of a class ?
4. Can we over-ride a destructor? 
5. Can we call a destructor? 
6. Can a destructor have parameters? 
7. How to create a custom destructor? 
8. When is a destructor called? 
9. What we use destructor for?
10. Destructor is used to free allocated memory? Explain with a programming example. 
11. Write short notes on the delete operator. 

## Static methods and classes 
1. What is a static variable? 
2. How is a static variable created and initialized? 
3. Where is a static variable defined in memory? 
4. How is a static variable different than a regular variable? 
5. Create a static variable that keeps count of how many times a function was called. 
6. Create a function that returns 0 for 25% of the time it is called, 1 for 50% of time and -1 for remaining time. [[design it]]
7. Create and initialize a static varialbe in a class with all the possible access specifiers. 
8. What is static binding and dynamic binding? 
9. Can you set the values of static variables in dynamic methods? 
   1. Why only static variables can be set in static functions only? 
### Static functions 
1. What are static functions? 
2. Why the concept of static functions were introduced? 
3. How to declare and define a static function.
4. Inherit from the vector<int> class and crate a static function that takes in a number n and returns an identity matrix of size = n created from vector. 
5. Are static methods also inherited in inheritance? 