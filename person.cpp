#include <iostream>

#include "person.h"

using namespace std;

//Person Member Functions
/******************************************************************/
Person::Person()
{
      string name = "None";
      string gender = "None";
}

Person::Person(string pname, string pgender)
{
      name = pname;
      gender = pgender;
}

void Person::setGender(string pgender)
{
      gender = pgender;
}

void Person::setName(string name)
{
    this->name = name;//use this pointer
}

void Person::display() const
{
      cout << "Name: " << name << "\n";
      cout << "Gender: " << gender << "\n";
}