#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H 

#include <iostream>

#include "person.h"

class Instructor : public Person
{
    public:
        //Constructors
        Instructor();
        Instructor(string name, string gender, double amount);

        //Mutator
        void setSalary(double amount);
        void display() const;
    
    private:
        double salary;
};

#endif