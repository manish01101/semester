#include<stdio.h>
void copyStr(char *newstr, char *str) {
    int i = 0;
    while(str[i] != '\0') {
        newstr[i] = str[i];
        i++;
    }
    newstr[i] = '\0';
}
int main() {
    char str[6], newstr[6];
    printf("enter string : ");
    gets(str);
    copyStr(newstr, str);
    printf("another string : ");
    puts(newstr);
}