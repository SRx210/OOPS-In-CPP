<div align="center">
  <img src="https://upload.wikimedia.org/wikipedia/commons/thumb/1/18/ISO_C%2B%2B_Logo.svg/120px-ISO_C%2B%2B_Logo.svg.png" alt="cpp" width="150">
</div>


# Object-Oriented Programming (OOP) in C++

## Overview

Object-Oriented Programming (OOP) is a programming paradigm that uses "objects" to model real-world entities. In C++, OOP enables developers to design software using classes and objects, which helps in organizing code and making it more reusable, scalable, and maintainable.

This repository provides an introduction and examples of the key concepts of OOP in C++.

## Key Concepts of OOP in C++

### 1. **Class**
A class is a blueprint or prototype for creating objects. It defines the properties (data members) and behaviors (member functions) that the objects created from the class will have.

```cpp
class Car {
public:
    string make;
    string model;
    int year;

    void start() {
        cout << "The car is starting!" << endl;
    }
};
```

2. Object
An object is an instance of a class. It holds specific values for the class's attributes and can call the methods defined by the class.

```cpp
Car myCar;  // Object of class Car
myCar.make = "Toyota";
myCar.model = "Corolla";
myCar.year = 2020;
myCar.start();  // Calling the method
```

3. Encapsulation
Encapsulation is the concept of bundling data and methods that operate on that data into a single unit (class) and restricting access to the data. This is typically achieved using access specifiers like public, private, and protected.
```cpp
class Car {
private:
    string make;
    int year;

public:
    void setMake(string m) {
        make = m;
    }

    string getMake() {
        return make;
    }
};
```
4. Inheritance
Inheritance is a mechanism where one class (derived class) can inherit properties and behaviors from another class (base class). This allows for code reuse and establishing hierarchical relationships.

```cpp
class Vehicle {
public:
    void drive() {
        cout << "Driving the vehicle!" << endl;
    }
};

class Car : public Vehicle {
public:
    void honk() {
        cout << "Honking the car horn!" << endl;
    }
};
```

5. Polymorphism
Polymorphism allows objects of different classes to be treated as objects of a common base class. It enables a single interface to represent different types of objects, and function behavior can be changed at runtime.

There are two types of polymorphism in C++:

Compile-time Polymorphism (Method Overloading)
Runtime Polymorphism (Method Overriding)
```cpp
class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound!" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks!" << endl;
    }
};
```
6. Abstraction
Abstraction is the concept of hiding the complex implementation details of a system and exposing only the necessary functionalities to the user. In C++, this is often done using abstract classes and pure virtual functions.

```cpp
class Shape {
public:
    virtual void draw() = 0;  // Pure virtual function (abstract class)
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a circle!" << endl;
    }
};
```
