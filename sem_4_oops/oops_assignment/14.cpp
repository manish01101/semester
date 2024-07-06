#include <iostream>
using namespace std;

const int stk_size = 50;

template <class T>
class Stack {
private:
    T arr[stk_size];
    int top;
public:
    Stack() : top(-1) {}  // Initialize top in the constructor

    void push(T data) {
        if(top == stk_size - 1) {
            cout << "Stack overflow" << endl;
        } else {
            arr[++top] = data;
        }
    }

    T pop() {
        if(top == -1) {
            cout << "Stack underflow" << endl;
            return T();  // Return a default-constructed value of type T
        } else {
            return arr[top--];
        }
    }

    void display() {
        if(top == -1) {
            cout << "Stack is empty" << endl;
        } else {
            for(int i = 0; i <= top; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack<int> intStack;

    // Push elements onto the stack
    intStack.push(10);
    intStack.push(20);
    intStack.push(30);

    // Display elements in the stack
    cout << "Stack contents: ";
    intStack.display();

    // Pop elements from the stack
    cout << "Popped element: " << intStack.pop() << endl;
    cout << "Popped element: " << intStack.pop() << endl;

    // Display elements in the stack
    cout << "Stack contents after popping: ";
    intStack.display();

    // Try to pop from an empty stack
    intStack.pop();
    intStack.pop();

    return 0;
}