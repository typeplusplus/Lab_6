#ifndef PERSON_H
#define PERSON_H

#include <iostream>

using namespace std;

class Person
{
  public:
    //Constructors
    Person();
    Person(string pname, string pgender);

    //Mutators
    void setName(string name);
    void setGender(string pgender);
    void display() const;

  private:
    string name;
    string gender;
};

#endif