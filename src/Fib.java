// Filename: Fib.java with similar behavior to Fib.cpp
import java.util.Scanner;
import java.io.IOException;

public class Fib {
  private static int fibCallsCounter;
  private static int fib(int n) {
    fibCallsCounter++;
    return (n <= 2) ? 1 : fib(n-1) + fib(n-2);
  }
  public static void main(String[] args) throws IOException {
    Scanner sc = new Scanner(System.in);
    while(true) {
      int n;
      fibCallsCounter = 0;
      System.out.print("Desired value of n (0 to quite): ");
       n = sc.nextInt();
      if(n == 0)
        break;
      System.out.println("The " + n + "th fibonacci number is " + fib(n));
      System.out.println("Function was called " + fibCallsCounter + " times");
    }
    sc.close();
  }
}