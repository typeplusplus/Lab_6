#include <iostream>

#include "instructor.h"

using namespace std;

//Instructor Member Functions
/******************************************************************/
Instructor::Instructor()
{
    double salary = 0;
}

Instructor::Instructor(string name, string gender, double amount): Person(name, gender)
{
    salary = amount;
}

void Instructor::setSalary(double amount)
{
    salary = amount;
}

void Instructor::display() const
{
    Person::display();
    /*cout << "Name: " << name << "\n";
      cout << "Gender: " << gender << "\n";*/
    cout << "Salary: " << salary << "\n";
}