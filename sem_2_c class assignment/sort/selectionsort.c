#include <stdio.h>
// min element placed at right pos
void selectionSort(int *arr, int n){
    for (int i = 0; i < n - 1; i++){
        int minIndex = i;
        for (int j = i + 1; j < n; j++){
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        // swap(arr[minIndex], arr[i]);
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}


int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    selectionSort(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
}