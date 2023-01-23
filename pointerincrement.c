#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fptr;
    char text[100];

    if((fptr = fopen("C:\\trial\\hello.txt", "r")) == NULL){
        printf("ERROR!..");
        exit(1);
    }
    fscanf(fptr,"%s", text);
    printf("%s", text);
    fclose(fptr);
    return 0; 
    
}