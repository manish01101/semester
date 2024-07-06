#include<stdio.h>

int factRec(int n) {
    if ( n == 0) {
        return 1;
    }
    return  n * factRec(n-1);
}
int fact(int n) {
    int ans = 1;
    while(n>=1) {
        ans *= n;
        n--;
    }
    return ans;
}
int main() {

    int n = 5;
    printf("%d", fact(n));
    printf("\n%d", factRec(n));
    return 0;
}