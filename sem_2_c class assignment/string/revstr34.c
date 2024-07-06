#include<stdio.h>
void reverseStr(char *str) {
    int size = 0;
    while(str[size] != '\0') {
        size++;
    }
    int i = 0, j = size-1;
    while (i <= j) {
        char temp = str[i];
        str[i++] = str[j];
        str[j--] = temp;
    }  
}

int main() {
    char str[6];
    printf("enter string : ");
    gets(str);

    reverseStr(str);
    printf("reverse string : ");
    puts(str);
}