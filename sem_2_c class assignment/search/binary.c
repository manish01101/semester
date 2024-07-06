#include<stdio.h>

int binarySearch(int arr[], int size, int key) {
    int s = 0, e = size - 1;
    int mid = s + (e-s)/2;
    for(int i = s; i < e; i++) {
        if(key == arr[mid]) {
            return 1;
        }
        else if(key > arr[mid]) {
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return 0;
}

int main() {
    int arr[6] = {1, 3, 5, 6, 8, 9};
    int size = 6;
    int key = 7;
    int ans =  binarySearch(arr, size, key);
    // printf("%d", ans);
    if(ans == 1) {
        printf("key is present \n");
    }
    else {
        printf("key is not present \n");

    }
    return 0;

}