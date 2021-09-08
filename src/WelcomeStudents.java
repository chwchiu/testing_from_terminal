/* Filename: WelcomeStudents.java */
// This program requires Java 14 or above to run

public final class WelcomeStudents implements Ifc {
  public static void main(String[] args) {
    var i = (int) (Math.random()*100);
    var greetings =
      switch (i%4) {
        case 0 -> "Comp3021 " + i;
        case 1 -> "COMP3021 " + i;
          default -> {
              if (i <= 50)
                  yield "java programming " + i;
              else
                  yield "Java Programming " + i;
          }
      };
    System.out.println("Welcome to " + greetings);
  }
}

sealed interface Ifc {}