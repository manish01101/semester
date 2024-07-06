#include<iostream>
using namespace std;

int ADD(int a, int b){
	return a+b;
}
int ADD(int a, int b, int c){
	return a+b+c;
}
int ADD(int a, int b, int c, int d){
	return a+b+c+d;
}
int ADD(int a, int b, int c, int d, int e){
	return a+b+c+d+e;
}



int main(){
	int twoArgs = ADD(2, 3);
	cout << "twoArgs: " << twoArgs << endl;
	int threeArgs = ADD(2, 3, 4);
	cout << "threeArgs: " << threeArgs << endl;
	int fourArgs = ADD(2, 3, 4, 5);
	cout << "fourArgs: " << fourArgs << endl;
	int fiveArgs = ADD(2, 3, 4, 5, 6);
	cout << "fiveArgs: " << fiveArgs << endl;
}
