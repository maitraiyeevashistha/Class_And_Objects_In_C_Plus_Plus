# Classes and Objects in C++

## Title: Classes and Objects in C + + 
---

## Aim :
*To study classes and objects in C++*

-----
## Introduction
This repository contains examples and explanations related to classes and objects in C++. Classes and objects are the fundamental building blocks of Object-Oriented Programming (OOP). They allow for better organization of code, reusability, and modeling of real-world entities.

### What is a Class?

A class is a user-defined data type that acts as a blueprint for creating objects. It can contain:

 - Data members (variables to store data)

 - Member functions (functions to perform operations on data)

Syntax:
```cpp
class ClassName {
    // Access specifiers: private, public, protected
    int data;        // Data member
public:
    void display();  // Member function
};
```
### What is an Object?

An object is an instance of a class. Objects hold actual values and can access the class's member functions and data.

Example:
```cpp
ClassName obj;  // Create an object of ClassName
obj.display();  // Call member function using the object
```

### Access Specifiers
 - `public`: Members can be accessed from outside the class.

 - `private`: Members are hidden and can only be accessed through class functions.(Note : attributes are private by default if not specified)

 - `protected`: Members are accessible inside the class and by derived classes.


### Benefits of Using Classes and Objects

 - Reusability: Classes can be reused multiple times to create different objects.

 - Encapsulation: Data and related functions are grouped together, ensuring security and clarity.

 - Readability: Programs are easier to read and maintain since related code is grouped logically.

 - Scalability: Programs can be extended easily without rewriting everything.

 - Reduced complexity: Programs are broken into manageable chunks, preventing overly large and confusing code.

## Summary of Programs

### Program 1. Student Information 
---
*Problem statement: Create a class "student" and input two records in it*

#### Algorithm :

 - Define a class named `Student` with the following public data members:
     - `string name`
     - `string branch`
     - `string subject`
     - `string year`
     - `float result`
       
 -  Enter the main() function.
 -  Create the first object s1 of class Student.
 -  Assign values to the data members of s1:
     - s1.name = "Maitraiyee"
     - s1.branch = "E&Tc"
     - s1.subject = "C++"
     - s1.result = 8.6
       
 -  Display the values of s1 using cout.
 -  Create the second object s2 of class Student.
 -  Assign values to the data members of s2:
     - s2.name = "Maitreyee"
     - s2.branch = "E&Tc"
     - s2.subject = "C++"
     - s2.result = 8.9
       
-  Display the values of s2 using cout.



### Program 2. Car Dealership
---
*Problem statement: To make a class Car and input values in it*

#### Algorithm :

 - Define a class named Car with the following public data members:
     - `string Brand`
     - `string Name`
     - `string Car_ID`
     - `string Quantity`
     - `float cost`
       
 -  Enter the main() function.
 -  Declare an integer variable x.
 -  Prompt the user: “Enter the number of cars you need to input” and store the value in x.
 -  Declare an array of objects: Car cars[100] to store details of multiple cars.
 -  Repeat the following steps inside a for loop that runs from i = 0 to i < x:
     - Input cars[i].Brand (Brand of the car).
     - Input cars[i].Name (Name of the car).
     - Input cars[i].Car_ID (Unique ID of the car).
     - Input cars[i].Quantity (Quantity available).
     - Input cars[i].cost (Cost of the car).
     - Print a blank line for clarity.
       
 -  After the loop ends, declare a string variable id.
 -  Prompt the user: “Enter the ID of car” and store the input in id.
 -  Initialize a boolean variable found = false.
 -  Use a for loop that runs from i = 0 to i < x:
     - If `id == cars[i].Car_ID`, then:
     - Print: “We have that car in stock!”.
     - Print the car details:
     - Brand
     - Name
     - Quantity
     - Cost
     - Set found = `true`.
     - Exit the loop using break.
       
 -  After the loop, check the value of found:
     - If found == false, print: “Unfortunately, we do not have that car”.
 -  End the program.



### Program 3. Calculator
---
*Problem statement: To create a calculator using classes and functions*

#### Algorithm

 -   Inside the main() function, define a class Calc with:
     -  Data Members:
         -  int A → to store the first number
         -  int B → to store the second number
     -  Member Functions:
         - ` add()` → displays the result of `A + B`.
         -  `subtract()` → displays the result of `A - B`.
         -  `divide()` → displays the result of `A / B`.
         -  `multiply()` → displays the result of `A * B`.
           
 -   Declare an object C1 of class Calc.
 -   Prompt the user: “Enter the first number” and store the value in C1.A.
 -   Prompt the user: “Enter the second number” and store the value in C1.B.
 -   Perform operations using the object C1:
     -  Display “The addition is:” and call `C1.add()`.
     -  Display “The subtraction is:” and call `C1.subtract()`.
     -  Display “The division is:” and call `C1.divide()`.
     -  Display “The multiplication is:” and call `C1.multiply()`.
 -   Print results for each operation on the console.
 -   End the program.


### Program 4. Volume of a Cuboid
---
*Problem statement : to create a function in a class and to claculate the volume of a given cuboid*

#### Algorithm 

 - **Define a class** `MyClass` with the following:
   - **Data Members:**
     - `int height = 10`
     - `int width = 10`
     - `int length = 5`
   - **Member Functions:**
     - `Volume()` → defined *inside* the class, calculates and prints volume as `height * width * length`.
     - `myVolume()` → declared inside the class but defined *outside* the class using scope resolution `::`, also calculates and prints volume.

- **In `main()` function:**
   - Create an object `M1` of class `MyClass`.

 - **Call** `M1.Volume()` to calculate and print the volume.

 - **Print** a newline for readability.

 - **Call** `M1.myVolume()` to calculate and print the volume again.

 - **End** the program.

### Program 5. Area of Rectangle 
---
*Problem statement: to create a class and find the area of s rectangle*

#### Algorithm

 - **Define a class** `Rectangle` with:
   - **Data Members:**
     - `int length`
     - `int width`
   - **Member Function:**
     - `area()` → calculates and prints the area as `length * width`.

 - **In `main()` function:**
   - Create an object `R1` of class `Rectangle`.
   - Ask the user to **enter the length** of the rectangle and store it in `R1.length`.
   - Ask the user to **enter the width** of the rectangle and store it in `R1.width`.

 - **Display message**: `"The area of the rectangle R1 is:"`.

 - **Call** `R1.area()` to calculate and print the area.

 - **End** the program.
   
### Program 6. Class methods 
---
*Problem statement : to create a class and access/use a function defined in the class in main*

#### Algorithm

 - **Define a class** `MyClass` with:
   - **Member Functions:**
     - `method()` → defined **inside the class**, prints `"Hello"`.
     - `myFun()` → declared inside the class but **defined outside**, prints `"Helloo"`.

 - **Outside the class definition**:
   - Define the function `void MyClass::myFun()` which prints `"Helloo"`.

 - **In the `main()` function**:
   - Create an object `M1` of class `MyClass`.
   - Call `M1.method()` → prints `"Hello"`.
   - Call `M1.myFun()` → prints `"Helloo"`.

 - **End** the program.

## Conclusion 

This experiment demonstrated the fundamental concepts of **classes and objects in C++**, which form the foundation of object-oriented programming. The following important points were observed:

- A **class** is a blueprint that defines properties (data members) and behaviors (member functions).  
- An **object** is an instance of a class that allows access to these members.  
- Member functions can be defined **inside the class** or **outside the class** using the **scope resolution operator (::)**.  
- Through different programs, the use of classes was applied to real-life problems such as calculating the area of a rectangle, performing arithmetic operations (calculator), storing car details, and finding volume.  
- By practicing multiple examples, it became clear how objects interact with data and functions, making programs more structured and easier to maintain.  




