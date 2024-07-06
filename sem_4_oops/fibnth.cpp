#include <iostream>
using namespace std;

int fibonacci(int n) {
  if (n <= 1) {
    return n;
  }
  return fibonacci(n - 1) + fibonacci(n - 2);
}
int main() {
  int n;
  cout << "Enter the value of n: ";
  cin >> n;
  if (n < 0) {
    cout << "Invalid input!" << endl;
  } else {
    cout << n << "th Fibonacci number is: " << fibonacci(n) << endl;
  }
  return 0;
}