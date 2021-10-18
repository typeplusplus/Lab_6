#include <iostream>

#include "student.h"

using namespace std;

//Instructor Member Functions
/******************************************************************/
Student::Student()
{
    string major = "None";
}

void Student::setMajor(string major)
{
    this->major = major;
}

void Student::display() const
{
    Person::display();
    /*cout << "Name: " << name << "\n";
      cout << "Gender: " << gender << "\n";*/
    cout << "Major: " << major << "\n";
}