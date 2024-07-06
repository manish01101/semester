#include<stdio.h>
//largest element placed at right pos
void bubbleSort(int *arr, int n) {
    for(int i = 0; i<n-1; i++) {
        for(int j=0; j<n-1-i; j++) {
            if(arr[j] > arr[j+1]){
                //swap(arr[j], arr[j+1]);
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main() {
    int arr[5];
    for(int i=0; i<5; i++) {
        scanf("%d", &arr[i]);
    }
    bubbleSort(arr, 5);
    for(int i=0; i<5; i++) {
        printf("%d ", arr[i]);
    }
}