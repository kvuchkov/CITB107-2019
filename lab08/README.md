# Lab 8 - Classes
This lab explores how we can use classes in C++ to extend the language with custom types.

## Exercise 1
Write a class that models fraction, e.g. `3/4`. The class should allow to add two fractions together and get another fraction.
- Private members (both functions and variables) of a class can be accessed only by class member functions. One object from that class can access other object's private members, because they are from the same class.
- Constructors are special member-functions that have no return type and are named after the class.
    - Default constructor is called when class variable is declared, i.e. classes are always initialized.
    - Additional constructors can be defined to initialize a class in a specific way.
- Objects of a class can be used as a function parameters and return type. They are passed by value by default, i.e. copied.
- Expose only the minimum API necessary to do the job. It is difficult to hide functions later, because other code might be using them.
