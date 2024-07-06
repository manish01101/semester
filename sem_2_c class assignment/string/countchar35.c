#include<stdio.h>
void count(char *str) {
    int i = 0;
    int cntspace = 0, cntchar = 0;
    while(str[i] != '\0') {
        if(str[i] == ' ')
            cntspace++;
        else
            cntchar++;
        i++;
    }
    printf("no. of spaces : %d\n", cntspace);
    printf("no. of words : %d\n", cntspace+1);
    printf("no. of characters : %d\n", cntchar);
}
int main() {
    char str[60];
    printf("enter string : ");
    gets(str);

    count(str);
}