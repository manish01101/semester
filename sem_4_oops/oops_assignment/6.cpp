#include <iostream>

using namespace std;
// using binary exponentiation
// double powerBin(double n, int p = 2) {
//     double result = 1.0;
//     while (p > 0) {
//         if (p % 2 == 1) { // If p is odd, multiply the result by n
//             result *= n;
//         }
//         n *= n; // Square the base
//         p /= 2; // Divide p by 2
//     }
//     return result;
// }
// using loop
double power(double n, int p = 2) {
    double result = 1.0;
    for (int i = 0; i < p; ++i) {
        result = result * n;
    }
    return result;
}

int main() {
    double n;
    int p;

    cout << "Enter the number: ";
    cin >> n;

    cout << "Enter the power (default is 2): ";
    cin >> p;

    double result = power(n, p);

    cout << "Result: " << result << endl;

    return 0;
}

