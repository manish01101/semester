#include<stdio.h>
void tower(int n, char s, char a, char d){
    if(n==1){
        printf("\n Move disk 1 from rod %c to rod %c", s, d);
        return;
    }
    tower(n-1, s, d, a);
    printf("\n Move disk %d from rod %c to rod %c", n, s, d);
    tower(n-1, a, s, d);
}
int main(){
    int n;
    char src='A', aux='B', dest='C';
    printf("enter n : ");
    scanf("%d", &n);
    tower(n, src, aux, dest);
}
