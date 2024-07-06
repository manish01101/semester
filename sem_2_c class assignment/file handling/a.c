#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("a.txt", "w");
    //writing to file
    fprintf(fptr, "%s", "this is manish kumar");
    fputs("my name is manish", fptr);
    fclose(fptr);

    //reading from file
    fptr = fopen("a.txt", "r");
    char s[100];
    // fscanf(fptr, "%s", s); //read only a word
    // fgetc(fptr);
    fgets(s, 100, fptr);
    printf("%s", s);
    fclose(fptr);
}