#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {2, 5, 9, 0, 3, 7, 4, 6, 8};

    sort(v.begin(), v.end());

    int k;
    cout << "Enter k (1 to " << v.size() << "): ";
    cin >> k;

    if (k >= 1 && k <= v.size()) {
        cout << "The " << k << "-th largest element is: " << v[v.size() - k] << endl;
    } else {
        cout << "Error: k is out of bounds." << endl;
    }

    return 0;
}
