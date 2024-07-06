#include <iostream>
using namespace std;

int power(int base, int exp = 2) {
  int result = 1;
  for (int i = 0; i < exp; i++) {
    result *= base;
  }
  return result;
}

int main() {
  int base, exp;
  cout << "Enter base: ";
  cin >> base;
  cout << "Enter exponent:";
  cin >> exp;
  cout << endl;
  cout << base << " to the power of 2 is: " << power(base) << endl;
  cout << base << " to the power of " << exp << " is: " << power(base, exp) << endl;
  return 0;
}
