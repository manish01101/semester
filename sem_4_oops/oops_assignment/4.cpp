#include<iostream>

using namespace std;

struct Complex{
    double real;
    double imaginary;
};

Complex add(Complex c1, Complex c2){
    Complex result;
    result.real=c1.real+c2.real;
    result.imaginary=c1.imaginary+c2.imaginary;
    return result;
}

Complex subtract(Complex c1, Complex c2){
    Complex result;
    result.real=c1.real-c2.real;
    result.imaginary=c1.imaginary-c2.imaginary;
    return result;
}

Complex multiply(Complex c1, Complex c2){
    Complex result;
    result.real=c1.real*c2.real-c1.imaginary*c2.imaginary;
    result.imaginary=c1.real*c2.imaginary+c1.imaginary*c2.real;
    return result;
}

Complex divide(Complex c1, Complex c2){
    Complex result;
    double divisor=c2.real*c2.real+c2.imaginary*c2.imaginary;
    result.real=(c1.real*c2.real+c1.imaginary*c2.imaginary)/divisor;
    result.imaginary=(c1.imaginary*c2.real-c1.real*c2.imaginary)/divisor;
    return result;
}

void displayComplex(Complex c){
    if(c.imaginary<0)
        cout<<c.real<<-c.imaginary<<"i"<<endl;
    else
        cout<<c.real<<" + "<<c.imaginary<<"i"<<endl;
}

int main(){
    Complex c1, c2;
    cout<<"Enter the real part of the first complex number:";
    cin>>c1.real;
    cout<<"Enter the imaginary part of the first complex number:";
    cin>>c1.imaginary;

    cout<<endl<<"Enter the real part of the second complex number:";
    cin>>c2.real;
    cout<<"Enter the imaginary part of the second complex number:";
    cin>>c2.imaginary;

    cout<<endl<<"Sum of the two complex numbers:";
    displayComplex(add(c1,c2));
    cout<<"Difference of the two complex numbers:";
    displayComplex(subtract(c1,c2));
    cout<<"Product of the two complex numbers:";
    displayComplex(multiply(c1,c2));
    cout<<"Division of the two complex numbers:";
    displayComplex(divide(c1,c2));

    return 0;
}

