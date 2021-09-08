// Person-Class.h
#ifndef PERSON_H
#define PERSON_H
#include <iostream>
using namespace std;
class Person {
  // C++ breaks the declarations
  // of members up into groups
  private:
    string name;
    char gender;
    int age;
  public:
    Person::Person(string name,
                   char gender,
                   int age)
       // Initialization of
       // data members using MIL
       : name(name),
         gender(gender),
         age(age) {}
	
	// Constant member functions exist
    string Person::getName() const 
      { return name; }
    char Person::getGender() const
      { return gender; }
    int Person::getAge() const
      { return age; }		
    void Person::setName(string name)
      { this->name = name; }  // this pointer
    void Person::setGender(char gender)
      { this->gender = gender; } // this pointer
    void Person::setAge(int age)
      { this->age = age; }    // this pointer
    void Person::print() const {
      cout << "Name: " << name << endl;
      cout << "Gender: " << gender << endl;
      cout << "Age: " << age << endl;
    }    
}; // This semicolon is important
#endif