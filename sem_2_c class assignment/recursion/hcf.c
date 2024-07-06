#include<stdio.h>
int hcf(int dividend, int divisor) {
    if(dividend % divisor == 0)
        return divisor;
    int rem = dividend % divisor;
    dividend = divisor;
    divisor = rem;
    hcf(dividend, divisor);
}

int main() {
    int a, b;
    printf("enter a, b:");
    scanf("%d %d", &a, &b);
    // if(a>b)
        printf("hcf = %d", hcf(a, b));
    // else
    //     printf("hcf = %d", hcf(a, b));
}