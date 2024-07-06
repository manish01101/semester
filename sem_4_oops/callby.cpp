#include <iostream>
using namespace std;

// call by value
void callByValue(int x) {
  x += 5;
  cout << "Inside callByValue, x = " << x << endl;
}

// call by reference
void callByReference(int &x) {
  x += 5;
  cout << "Inside callByReference, x = " << x << endl;
}

// call by pointer
void callByPointer(int *x) {
  *x += 5;
  cout << "Inside callByPointer, x = " << *x << endl;
}

int main() {
  int x;
  cout << "enter value: ";
  cin >> x;

  // Call by value
  cout << "\nBefore callByValue, x = " << x << endl;
  callByValue(x);
  cout << "After callByValue, x = " << x << endl;

  // Call by reference
  cout << "\nBefore callByReference, x = " << x << endl;
  callByReference(x);
  cout << "After callByReference, x = " << x << endl;

  // Call by pointer
  cout << "\nBefore callByPointer, x = " << x << endl;
  callByPointer(&x);
  cout << "After callByPointer, x = " << x << endl;

  return 0;
}
