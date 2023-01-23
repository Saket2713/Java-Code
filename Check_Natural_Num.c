#include<stdio.h>
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    if(num >=1){
        printf("It is a natural number");
    }
    else{
        printf("It is not a natural number");
    }
    return 0;
}