#ifndef STUDENT_H
#define STUDENT_H 

#include <iostream>

#include "person.h"

class Student : public Person
{
    public:
        //Constructors
        Student();

        //Mutator
        void setMajor(string major);
        void display() const;
    
    private:
        string major;
};

#endif