#include <iostream>
#include <iomanip>
#include <cmath>

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
    char separator = use_facet< numpunct<char> >(cout.getloc()).thousands_sep();
    
    cout << "Salary: $" << salary/1000 << separator;
    cout.width(3); cout.fill('0');
    cout << fmod(salary,1000) << ".00" << '\n';
    //cout << "Salary: $" << fixed << setprecision(2) << salary << "\n";
}
