#include<iostream>
using namespace std;

int main() {
  int arr1[10][10], arr2[10][10], arr3[10][10];
  
  int r1, c1;
  cout << "enter row and col of 1 matrix: ";
  cin >> r1 >> c1;
  int r2, c2;
  cout << "enter row and col of 2 matrix: ";
  cin >> r2 >> c2;

  if(c1 != r2) {
    cout << "matrix multiplication not possible!\n";
  }
  else {
    cout << "\nenter " << r1 << "x" << c1 << " matrix ele: \n";
    for(int i=0; i<r1; i++) {
      for(int j=0; j<c1; j++) {
        cin >> arr1[i][j];
      }
    }
    cout << "enter " << r2 << "x" << c2 << " matrix ele: \n";
    for(int i=0; i<r2; i++) {
      for(int j=0; j<c2; j++) {
        cin >> arr2[i][j];
      }
    }

    // matrix multiplication
    cout << "\nfinal matrix:\n";
    for(int i=0; i<r1; i++) {
      for(int j=0; j<c2; j++) {
        arr3[i][j] = 0;
        for(int k=0; k<r2; k++) {
          arr3[i][j] += arr1[i][k] * arr2[k][j];
        }
        cout << arr3[i][j] << "\t";
      }
      cout << endl;
    }
  }
  return 0;
}