#include<stdio.h>
int main(int argc, char *argv[]){
    if(argc == 2){
        printf("one argument");
    }
    else if(argc > 2){
        printf("more argument");
    }
    else{
        printf("no argument");
    }
}