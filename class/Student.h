// Student.h
#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

// : is used for inheritance
// Can specify different type of
// inheritance by modifying the
// accessor modifier after :
// This example uses public
// inheritance
class Student : public Person {
  private:
    string major;
  public:
    Student(string name, char gender,
            int age, string major);
    string getMajor() const;
    void setMajor(string major);
    void print() const;
};
#endif