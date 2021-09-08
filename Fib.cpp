// Filename: Fib.cpp
#include <iostream>
using namespace std;

int fibCallsCounter; // Global variable

int fib(int n) {     // Global function
  fibCallsCounter++;
  return (n <= 2) ? 1 : fib(n-1) + fib(n-2);  
}

int main(int argc, char* argv[]) {
  while(true) {
    int n;
    fibCallsCounter = 0; // Refer to global variable
    cout << "Desired value of n (0 to quite): ";
    cin >> n;    
    if(n == 0)
      break;
    // fib(n) refers to a global function call
    cout << "The " << n << "th fibonacci number is " << fib(n) << endl;
    cout << "Function was called " << fibCallsCounter << " times" << endl;
  }
}