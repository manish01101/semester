#include<stdio.h>
// insertion sort - only shifting element not swapping

void insertionSort(int *arr, int n) {
    for(int i = 1; i<n; i++) {
        int temp = arr[i];
        int j = i-1;
        while (j>=0){
            if(arr[j] > temp)
                arr[j+1] = arr[j]; //shifting   
            else
                break;
            j--;
        }
        arr[j+1] = temp; 
    }
}
int main() {
    int arr[5];
    for(int i=0; i<5; i++) {
        scanf("%d", &arr[i]);
    }
    insertionSort(arr, 5);
    for(int i=0; i<5; i++) {
        printf("%d ", arr[i]);
    }
}