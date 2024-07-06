#include<iostream>
using namespace std;

void swap_value(int, int);
void swap_pointer(int*, int*);
void swap_ref(int&, int&);

void swap_value(int a, int b){		//swap by value
	int temp = a;
	a = b;
	b = temp;
}

void swap_pointer(int *a, int *b){		//swap by pointer
	int temp = *a; // dereferencing a
	*a = *b;
	*b = temp;
}

void swap_ref(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
}

int main(){
	int n1, n2;
    cout << "enter n1 & n2: ";
    cin >> n1 >> n2;
    int temp1 = n1, temp2 = n2;

    cout << "Before swapping: " << n1 << " and " << n2 << endl;

    // swap by value
    swap_value(n1, n2);
    cout << "After swapping by value: " << n1 << " and " << n2 << endl;
    
    n1=temp1, n2=temp2;
    
    // Swap by pointer
    swap_pointer(&n1, &n2);
    cout << "After swapping by pointer: " << n1 << " and " << n2 << endl;
    
    n1=temp1, n2=temp2;
    
    // Swap by reference
    swap_ref(n1, n2);
    cout << "After swapping by reference: " << n1 << " and " << n2 << endl;
}
