#include<iostream>
using namespace std;

void printPrime(int a, int b){
	for(int i=a; i<=b; i++){
		int cnt=0;
		for(int j=2; j<i; j++){
			if(i%j==0){
				cnt++;
			}
		}
		if (cnt==0)
			cout<<i<<" ";
	}
}

int main(){
	int x,y;
	cout<<"Enter the first number: ";
	cin>>x;
	cout<<"Enter the second number: ";
	cin>>y;
	printPrime(x,y);
}
