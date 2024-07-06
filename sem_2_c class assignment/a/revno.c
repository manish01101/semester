#include<stdio.h>
void rev(int n){
    if(n == 0){
        return;
    }
    int digit = n%10;
    printf("%d", digit);
    rev(n/10);
}
int main(){
    rev(12345);
}