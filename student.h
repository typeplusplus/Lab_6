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
        /*
        setMajor member function: sets major equal to major
        @param - major
        @param - None
        */
        void setMajor(string major);

        //Accessor
        /*
        display member function: prints the member data information
        @param - None
        @return - None
        */
        void display() const;
    
    private:
        string major;
};

#endif
