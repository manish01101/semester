#include <iostream>
using namespace std;

// Constants
const float PI = 3.14159;

// Function prototypes
float AREA(float);               // For circle
float AREA(float, float);        // For rectangle
float AREA(float, float, float); // For triangle

int main() {
  float radius;
  cout << "\nEnter the radius of the circle: ";
  cin >> radius;
  cout << "Area of the circle is " << AREA(radius) << endl;

  float length, breadth;
  cout << "\nEnter the length and breadth of the rectangle: ";
  cin >> length >> breadth;
  cout << "Area of the rectangle is " << AREA(length, breadth) << endl;

  float base, height;
  cout << "\nEnter the base and height of the triangle: ";
  cin >> base >> height;
  cout << "Area of the triangle is " << AREA(base, height, 0.5) << endl;

  return 0;
}

// Function definitions
float AREA(float r) {
  return PI * r * r;
}

float AREA(float l, float b) {
  return l * b;
}

float AREA(float b, float h, float c) {
  return b * h * c;
}