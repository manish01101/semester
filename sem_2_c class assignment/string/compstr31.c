#include<stdio.h>
void compStr(char *str1, char *str2) {
    int i = 0;
    int ans = 1;
    while(str1[i] != '\0' || str2[i] != '\0') {
        if(str1[i] != str2[i]){
            ans = 0;
            break;
        }
        i++;
    }
    if(ans)
        printf("equal");
    else
        printf("not equal");
}
int main() {
    char str1[6], str2[6];
    printf("enter string 1: ");
    gets(str1);
    printf("\nenter string 2: ");
    gets(str2);
    compStr(str1, str2);
}