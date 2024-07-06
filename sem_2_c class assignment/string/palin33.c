#include<stdio.h>
void palindrome(char *str) {
    int size = 0;
    while(str[size] != '\0') {
        size++;
    }
    // printf("%d", size);
    int i = 0, j = size-1;
    int ans = 1;
    while (i <= j) {
        if(str[i] != str[j]){
            ans = 0;
            break;
        }
        i++;
        j--;
    }
    if(ans)
        printf("palindrome");
    else
        printf("not palindrome");   
}

int main() {
    char str[6];
    printf("enter string : ");
    gets(str);

    palindrome(str);
}