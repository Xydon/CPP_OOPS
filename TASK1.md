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
