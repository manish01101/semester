#include <iostream>
using namespace std;

// early binding using funciton overloading
void add(int a, int b) {
  cout << a+b << '\n';
  return;
}
void add(float a, float b) {
  cout << a+b << '\n';
  return;
}

int main() {
  cout << "for interger type variable:\n";
  add(5, 6);
  cout << endl;
  cout << "for floating type variable:\n";
  add(5.0f, 4.6f);
  return 0;
}
