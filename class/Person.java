// Person.java
public class Person {
  private String name;
  private char gender;
  private int age;
  public Person(String name, char gender, int age) {
    this.name = name;
    this.gender = gender;
    this.age = age;
  }
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