#include<stdio.h>
int main() {
    int n = 8;
    for(int i = 1; i <= n; i++){
        char c = 'a';
        for(int j = 1; j <= n-i; j++)
            printf(" ");
        for(int j = 1; j <= i; j++)
            printf("%3c", c++);
        printf("\n");
    }
    for(int i = 1; i <= n-1; i++){
        char c = 'a';
        for(int j = 1; j <= i; j++)
            printf(" ");
        for(int j = 1; j <= n-i; j++)
            printf("%0 3c", c++);
        printf("\n");
    }
    // int i , j;
    // int m , k = 4;
    // char st[] = "wxyz";
    // for(i = 0; i<4 ; i++){
    //     for(m = 0; m<k; m++){
    //         printf(" ");
    //     }
    //     for(j = 0; j<=i; j++){
    //         printf("%2c", st[j]);
    //     }
    //     printf("\n");
    //     k--;
    // }
    // k = k+2;
    // for(i = 3; i > 0 ; i--){
    //     for(m = 0; m<k; m++){
    //         printf(" ");
    //     }
    //     for(j = 0; j<i; j++){
    //         printf("%2c", st[j]);
    //     }
    //     printf("\n");
    //     k++;
    // }
}