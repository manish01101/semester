#include<iostream>
using namespace std;

class Complex{
	public:
		int real;
		int img;
		
		Complex(){
			real=0;
			img=0;
		}
		
		Complex(int real){
			this->real=real;
			img=0;
		}
		
		Complex(int real, int img){
			this->real=real;
			this->img=img;
		}
		
		friend Complex add(const Complex&, const Complex&);
		friend void display(const Complex&);
};
Complex add(const Complex &c1, const Complex &c2) {
	return Complex(c1.real+c2.real, c1.img+c2.img);
}
void display(const Complex &c) {
	cout << "Number: " << c.real << " + " << c.img << "i" << endl;
}

int main() {
    Complex c1(3, 4); 
    Complex c2(5, 6);   
    Complex c3 = add(c1, c2);
	display(c3);

    return 0;
}
