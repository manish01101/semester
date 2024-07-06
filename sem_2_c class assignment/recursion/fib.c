#include<stdio.h>
void fib(int n) {
    int first = 0;
    int second = 1;
    if(n == 1)
        printf("%d", first);
    else if(n == 2)
        printf("%d %d ", first, second);
    else if(n>2) {
        printf("%d %d ", first, second);
        for(int i = 2; i<n; i++) {
            int next = first+second;
            printf("%d ", next);
            first = second;
            second = next;
        }
    }
}
int fibRecur(int n) {
    if(n == 0 || n==1) {
        return n;
    }
    return fibRecur(n-1) + fibRecur(n-2);
}


int main() {
    int n = 6;
    for(int i = 0; i<6; i++) {
        printf("%d ", fibRecur(i));
    }
    printf("\nwithout recursion\n");
    fib(n);
}