#include<stdio.h>

void t(int n, char s, char a, char d){
    if(n == 1){
        printf("\nmove disk %d from %c to %c", n, s, d);
        return;
    }
    t(n-1, s, d, a);
    printf("\nmove disk %d from %c to %c ", n, s, d);
    t(n-1, a, s, d);
}
int main(){
    t(3, 'a', 'b', 'c');
}