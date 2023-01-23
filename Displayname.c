#include<stdio.h>
int main(){
    char name[60];
    printf("Enter your name:");
    gets(name);
    for(int i=1; i<=10; i++){
        puts(name);
    }
    return 0;
}