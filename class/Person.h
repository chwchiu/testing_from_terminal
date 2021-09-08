// Person.h
#ifndef PERSON_H
#define PERSON_H
#include <iostream>
using namespace std;
class Person {
  private:
    string name;
    char gender;
    int age;
  public:
    Person(string name, 
           char gender,
           int age);
    string getName() const;
    char getGender() const;
    int getAge() const;
    void setName(string name);
    void setGender(char gender);
    void setAge(int age);
    void print() const;
}; // This semicolon is important
#endif