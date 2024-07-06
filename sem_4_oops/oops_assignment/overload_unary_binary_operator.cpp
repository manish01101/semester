#include<iostream>
using namespace std;

class Complex {
    private:
    int real;
    int img;

    public:
    Complex() : real(0), img(0) {}
    Complex(int x, int y) : real(x), img(y) {}

    //overloading operator using member fn
    void operator++ () {
        ++real;
        ++img;
    }
    Complex operator+ (const Complex &c) const {
        return Complex(real+c.real, img+c.img);
    }

    // overloading operator using non-member fn
    friend void operator-- (Complex &c);
    friend Complex operator- (const Complex &c1, const Complex &c2);

    // display
    friend void display(const Complex&);
};

void operator--(Complex &c) {
    --c.real;
    --c.img;
}
Complex operator- (const Complex &c1, const Complex &c2) {
    return Complex(c1.real - c2.real, c1.img - c2.img);
}
void display(const Complex &c) {
    cout << "c value: " << c.real << ", " << c.img << "\n";
}

int main() {
    Complex c1(3, 4);
    Complex c2(1, 2);

    ++c1;
    display(c1);

    c1 = c1 + c2;
    display(c1);

    --c1;
    display(c1);

    Complex c3 = c1 - c2;
    display(c3);

    return 0;
}