// Filename: InputDataDemo.java
/* An example showing how to get input from keyboard */
import java.util.Scanner;
public class InputDataDemo {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter your name: ");
    String name = sc.nextLine();
    System.out.print("Enter your age: ");
    int age = sc.nextInt();
    System.out.print("Enter your gender: ");
    String gender = sc.next();
    System.out.print("Enter your height: ");
    double height = sc.nextDouble();
    sc.close();
    System.out.println();
    System.out.println("Your name is " + name);
    System.out.println("Your age is " + age);
    System.out.println("Your gender is " + gender);
    System.out.println("Your height is " + height);
  }
}