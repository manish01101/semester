#include<stdio.h>
int stringLen(char *ch){
    int i = 0;
    while(ch[i] != '\0') {
        i++;
    }
    return i;
}
int main() {
    char str[30];
    printf("enter string : ");
    gets(str);
    printf("size = %d", stringLen(str));
}