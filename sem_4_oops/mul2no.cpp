#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <queue>
#include <stack>
using namespace std;

inline int mul(int a, int b) {
  return a*b;
}

int main() {
  int a, b;
  cin >> a >> b;
  cout << mul(a, b) << endl;
  return 0;
}