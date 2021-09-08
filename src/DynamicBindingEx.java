// DynamicBindingEx.java with similar behavior to dynamic-binding.cpp
class A {
  public void funcX() { System.out.println("funcX in A"); }
  public void funcY() { System.out.println("funcY in A"); }
}
	
class B extends A {
  @Override
  public void funcY() { System.out.println("funcY in B"); }
}

public class DynamicBindingEx {
  public static void main(String[] args) {
    var aRef = new B();
    aRef.funcY();
    String s = "hello";
  }
}