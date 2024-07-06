#include<iostream>
using namespace std;

class Complex{
	public:
	int real;
	int imag;
	
	Complex(int r=0, int i=0){
		real=r;
		imag=i;
	}
	
	friend Complex operator+(const Complex &c1, const Complex &c2);
	
	void display(){
		cout<<real<<" + "<<imag<<"i";
	}
};

Complex operator+(const Complex &c1, const Complex &c2){
	return Complex(c1.real+c2.real, c1.imag+c2.imag);
}

int main(){
	Complex c1(3.0, 4.0);
	Complex c2(1.5+2.5);
	Complex c3;
	
	c3=c1+c2;
	
	cout<<"Sum="<<endl;
	c3.display();
}
