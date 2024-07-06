#include<stdio.h>
#include<iostream>
#include <typeinfo>


int main(){
    char s[2] = {'b', 'h'};
    int i= 0;
    while(s[i] != '\0'){
        printf("%c", s[i]);
    i++;
    }
    if(s[i]=='\0')
        printf("yes");
    // for(i = 0; s[i]; i++){
    //     printf("%c\n", s[i]);
    // }
    // printf("%d", i);
    // std::cout << s[i] << i << std::endl; 
    
    // std::cout << std::endl<< typeid(s).name() << std::endl;
}

// #include<conio.h>
// int main(void){
    // int a[15][20];
    // printf("%d\n", a);
    // printf("%d\n", &a[0][0]);
    // // printf("%d\n", &a[12][0]);
    // printf(" %d\n", &a[12][13]);

    // int x = &a[0][0];
    // int y = &a[12][13];
    // printf("%d", x-y);  

    // int i;
    // for(i = 1; i<=5; i++)
    //     printf("%d", i);
    // getch();

    // int a[5]= {51, 1, 5, 20, 25};
    // int x, y, z;
    // printf(typeof(x));
    // printf("%d\n", a);
    // printf("%s", typeof(a-1));
    // x = ++a[1];
    // y = a[1]++;
    // z = a[x++];
    // printf("%d %d %d", x, y, z);
//     return 0;
// }