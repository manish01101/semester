#include<iostream>
using namespace std;

class Complex{
	public:
		double real;
		double img;
		
		Complex(double r=0.0, double i=0.0){
			real=r;
			img=i;
		}
		
		Complex operator+(const Complex &other) {
			return Complex(real+other.real, img+other.img);
		}
		
		void display(){
			cout<<real<<" + "<<img<<"i" << endl;
		}
};

int main(){
	Complex c1(3.0, 4.0);
	Complex c2(1.5, 2.5);
	Complex c3;
	
	c3=c1+c2;
	
	cout<<"Sum="<<endl;
	c3.display();
}
