// Student.cpp
#include "Student.h"
Student::Student(string name, char gender,
                 int age, string major)
  // Initialization of inherited data
  // members is done via
  // member initialization list
  : Person(name, gender, age), major(major)
{}

string Student::getMajor() const {
  return major;
}

void Student::setMajor(string major) {
  this->major = major;
}

void Student::print() const {
  // Call print() of the base class
  Person::print();
  cout << "Major: " << major << endl;
}