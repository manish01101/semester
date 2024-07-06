#include<stdio.h>
int a, b;
void swap() {
    int temp = a;
    a = b;
    b = temp;
    printf("a=%d,  b=%d", a, b);
}
int main() {
    printf("enter a : ");
    scanf("%d", &a);
    printf("enter b : ");
    scanf("%d", &b);
    swap();
}