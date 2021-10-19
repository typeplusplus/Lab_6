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
/*
setName member function: sets name to name
@param - name
@return - None
*/
    void setName(string name);
/*
setGender member function: sets gender to pgender
@param - pgender
@return - None
*/
    void setGender(string pgender);
/*
display member function: prints out information 
for name and gender.
@param - name
@return - None
*/
    void display() const;

  private:
    string name;
    string gender;
};

#endif
