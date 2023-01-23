#include<stdio.h>
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    if(num%2==0){
        printf("Divisible by 2");
    }
    else{
        printf("Not divisible by 2");

    }
    return 0;
}