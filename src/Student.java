// Student.java

// extends is used for inheritance
// No access modifier shoudl be placed after extends
// since only public inheritance is available
public class Student extends Person {
  private String major;
  
  public Student(String name, char gender, int age, String major) {
    // Initialization of inherited instance variables is done 
    // using the keyword super
    super(name, gender, age);
    this.major = major;
  }
  
  public String getMajor() { return major; }  
  
  public void setMajor(String major) { this.major = major; }
  
  public void print() {
    // Call print() of the superclass
    super.print();
    System.out.println("Major: " + major);
  }
}