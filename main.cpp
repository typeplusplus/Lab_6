//g++ main.cpp person.cpp person.h instructor.cpp instructor.h student.cpp student.h printmefirst.cpp printmefirst.h -o Main

#include <iostream>
#include <string>

#include "person.h"
#include "instructor.h"
#include "student.h"
#include "printmefirst.h"

using namespace std;

int main()
{
    Person maxwell ("Maxwell Smith", "M");
    Instructor mary;
    Student jonathan;
    Instructor ron("Ron Sha", "M", 50000);
    
    printmefirst("Ron Sha", "Lab Employee");
    
    mary.setName("Mary Smith");
    mary.setGender("F");
    mary.setSalary(85000);
    
    jonathan.setName("Jonathan Smith");
    jonathan.setGender("M");
    jonathan.setMajor("Computer Science");
    
    maxwell.display();
    cout << endl;
    
    mary.display();
    cout << endl;
    
    jonathan.display();
    cout << endl;
    
    ron.display();
    cout << endl;
    
    return 0;
}

/*
Inheritance

Creating new specialized version of a class that already exists

Establishes a "is a" relationship

Flower "is a" plant
Poodle "is a" dog

Declaring Class and Derived Class
  Base
    class <name of class> {};
    class Student {};
  Derived
    class <name of class> : public <base class> {};
    class UnderGrad : public Student {};

An object of the derived class "is a(n)" object of the base class

~<class name>(); <- declaration of destructor which is called when the object is brought out of scope.

Interesting how when constructoring using a derived class, C++ will call the base class constructor before the derived class constructor
Map the sequencing for a post

8:24am reviewing BaseDerived program

Derived class constructor into Base class constructor
Square::Square(int side) : Rectangle(side, side)

8:48am CruiseShip "is a" Ship program review

9:01am 
Base: Car 
Derived: Automobile 



*/