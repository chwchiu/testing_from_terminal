// Person.cpp
#include "Person.h"
Person::Person(string name,
               char gender,
               int age)
   : name(name), gender(gender), age(age) {}
string Person::getName() const
  { return name; }
char Person::getGender() const
  { return gender; }
int Person::getAge() const
  { return age; }
void Person::setName(string name)
  { this->name = name; }
void Person::setGender(char gender)
  { this->gender = gender; }
void Person::setAge(int age)
  { this->age = age; }
void Person::print() const {
  cout << "Name: " << name << endl;
  cout << "Gender: " << gender << endl;
  cout << "Age: " << age << endl;
}