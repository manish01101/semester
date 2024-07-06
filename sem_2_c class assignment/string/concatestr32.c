#include<stdio.h>
void concatStr(char *str1, char *str2) {
    int i=0, j = 0;
    while(str1[i] != '\0') {
        i++;
    }
    while(str2[j] != '\0'){
        str1[i++] = str2[j++];
    }
    str1[i] = '\0';
}
int main() {
    char str1[6], str2[6];
    printf("enter string 1: ");
    gets(str1);
    printf("\nenter string 2: ");
    gets(str2);
    concatStr(str1, str2);
    puts(str1);
    puts(str2);
}