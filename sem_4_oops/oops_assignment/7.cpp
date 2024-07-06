#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imaginary;
public:
    void set(float real_part, float imag_part) {
        real = real_part;
        imaginary = imag_part;
    }

    void display() {
        cout << real << " + " << imaginary << "i";
    }
    Complex sum(Complex other) {
        Complex result;
        result.real = real + other.real;
        result.imaginary = imaginary + other.imaginary;
        return result;
    }
};

int main() {
    Complex c1, c2, c3;
    c1.set(2.5, 3.5);
    c2.set(1.5, 2.5);
    c3 = c1.sum(c2);

    cout << "First complex number: ";
    c1.display();
    cout << endl;

    cout << "Second complex number: ";
    c2.display();
    cout << endl;

    cout << "Sum of two complex numbers: ";
    c3.display();
    cout << endl;

    return 0;
}

