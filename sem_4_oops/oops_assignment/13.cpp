#include<iostream>
using namespace std;

template <class T> 
T sum(T a, T b) {
    return a+b;
}

int main() {
    int ans1 = sum<int>(5, 6);
    cout << "integer sum: " << ans1 << endl;

    double ans2 = sum<double>(5.0, 7.3);
    cout << "double sum: " << ans2 << endl;
}