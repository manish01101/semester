#include<stdio.h>

int fun(int a, int b){
    if(a<b){
        return 0;
    }
    return fun(a-b, b)+1;
}

int main(){
    // printf("succ");

    // int a = 2;
    // int *p = &a;
    // char *q = p;
    // printf("%d %d", p, p-q);


    // float me = 2.1;
    // double you = 2.1;
    // if(me == you)
    //     printf("hello");
    // else
    //     printf("hi");


    // int i, j;
    // i = 2, j=2;
    // while(--i && j++){
    //     printf("%d %d", i, j);
    // }


    // printf("%d", fun(14,3));
    // for(int i=0; i<5; i++){
    //     printf("%d\n", 1L<<i);
    // }
    // int a = 10, b = 5, c = 3;
    // c = !!a;
    // printf("%d", c);


    // char arr[5] = {'a', 'b'};
    // printf("%d\n", arr);
    // printf("%d\n", arr+1);






    // int a = 0x6db7;
    // int b = 0xa726;
    // int c = a&b;

    // printf("%d\n", a);
    // printf("%d\n", b);
    // printf("%d", c);
    // int i = 1;
    // int ans = i++;
    // printf("%d", ans);
    // printf("%d", i);
    // for(i=1;i<=10;i++);
    // {
    //     printf("%d", i);
    //     i++;
    // }
}