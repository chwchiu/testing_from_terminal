// Person.java provides similar declarations to Person-Class.h
public class Person {
  // Initialization can be done on declarations
  private String name = "Tom";
  private char gender = 'M';
  private int age = 18;
  // No member initialization list
  public Person(String name, char gender, int age) {
    this.name = name;     // this reference
    this.gender = gender; // this reference
    this.age = age;       // this reference
  }
  // No constant methods
  public String getName() { return name; }
  public char getGender() { return gender; }
  public int getAge() { return age; }
  public void setName(String n) { name = n; }
  public void setGender(char g) { gender = g; }
  public void setAge(int a) { age = a; }
  public void print() {
    System.out.println("Name: " + name + "\nGender: " + gender + "\nAge: " + age);
  }
} // No semi-colon here