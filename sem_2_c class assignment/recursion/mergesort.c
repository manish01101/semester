#include <stdio.h>
int a[50], b[50];

void merge(int start, int end)
{
    int mid, k, i, j;
    mid = (start + end) / 2, k = start, i = start, j = mid + 1;
    while (i <= mid && j <= end) {
        if (a[i] < a[j])
            b[k++] = a[i++];
        else
            b[k++] = a[j++];
    }
    while (i <= mid)
        b[k++] = a[i++];
    while (j <= end)
        b[k++] = a[j++];
    for (i = start; i <= end; i++)
        a[i] = b[i];
}
void merge_sort(int start, int end)
{
    if (start < end)
    {
        int mid = (start + end) / 2;
        merge_sort(start, mid);
        merge_sort(mid + 1, end);
        merge(start, end);
    }
}
int main()
{
    int i, n = 6;
    printf("Enter the array elements\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    merge_sort(0, n - 1);
    printf("\nThe sorted array is\n");
    for (i = 0; i < n; i++)
        printf(" %d ", a[i]);
    return 0;
}


































































// #include<stdio.h>
// int a[6];
// int b[6];

// void merge(int left, int mid, int right){
//     int i = left;
//     int j = mid+1;
//     int k = left;
//     while( i<=mid && j<= right) {
//         if(a[i]<a[j]) {
//             b[k++] = a[i++];
//         }
//         else
//             b[k++]= a[j++];
//     }
//     while ( i<=mid) {
//         b[k++] = a[i++];
//     }
//     while ( j<= right) {
//         b[k++] = a[j++];
//     }
// }
// void mergeSort(int left, int right) {
//     if(left < right) {
//         int mid = (left+right)/2;
//         mergeSort(left, mid);
//         mergeSort(mid+1, right);

//         merge(left, mid, right);
//     }
// }
// int main() {

//     int size = 6;
//     for(int i = 0; i<6; i++) {
//         scanf("%d", &a[i]);
//     }
//     mergeSort(0, size-1);
//     for(int i = 0; i<6; i++) {
//         printf("%d ", b[i]);
//     }
//     return 0;
// }