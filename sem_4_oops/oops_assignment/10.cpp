#include <iostream>
using namespace std;

class shape {
public:
    virtual double area() const = 0; 
    virtual void display() const = 0; 
};

class rectangle : public shape {
private:
    double width, height;
public:
    rectangle(double w, double h) : width(w), height(h) {}
    
    double area() const override {
        return width * height;
    }
    
    void display() const override {
        cout << "Shape: Rectangle\nWidth: " << width << "\nHeight: " << height << "\nArea: " << area() << "\n";
    }
};

class circle : public shape {
private:
    double radius;
public:
    circle(double r) : radius(r) {}
    
    double area() const override {
        return 3.14 * radius * radius;
    }
    
    void display() const override {
        cout << "Shape: Circle\nRadius: " << radius << "\nArea: " << area() << "\n";
    }
};

class trapezoid : public shape {
private:
    double base1, base2, height;
public:
    trapezoid(double b1, double b2, double h) : base1(b1), base2(b2), height(h) {}
    
    double area() const override {
        return (base1 + base2) * height / 2;
    }
    
    void display() const override {
        cout << "Shape: Trapezoid\nBase1: " << base1 << "\nBase2: " << base2 << "\nHeight: " << height << "\nArea: " << area() << "\n";
    }
};


int main() {
    rectangle rectangle(5, 10);
    circle circle(7);
    trapezoid trapezoid(3, 5, 4);

    rectangle.display();
    circle.display();
    trapezoid.display();

    return 0;
}

