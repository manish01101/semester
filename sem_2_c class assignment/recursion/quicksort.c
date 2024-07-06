#include <stdio.h>
int arr[6];
int partition(int start, int end){
    int temp, pivot = arr[start], left = start + 1, right = end;   
    while (left <= right){
        while (arr[left] <= pivot)
            left++;
        while (arr[right] > pivot)
            right--;
        if (left < right){
            temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
        }
    }
    temp = arr[start];
    arr[start] = arr[right];
    arr[right] = temp;
    return right;
}

void quicksort(int start, int end){
    if (start < end){
        int pos = partition(start, end);
        quicksort(start, pos - 1);
        quicksort(pos + 1, end);
    }
}

int main() {   
    int n=6;
    printf("enter elements : \n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    quicksort(0, n - 1);

    for (int i = 0; i < n; i++)
        printf("%d  ", arr[i]);

    return 0;
}