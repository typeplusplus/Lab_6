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
        /*
        setSalary member function: Sets salary equal amount value
        @param - amount: parameter passed containing how much the persons salary is
        @return - None
        */
        void setSalary(double amount);
        
        //Accessor
        /*
        display member function: prints the member data information
        @param - None
        @return - None
        */
        void display() const;
    
    private:
        double salary;
};

#endif
