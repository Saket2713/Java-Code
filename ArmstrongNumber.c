#include<stdio.h>
int main(){
    int num,sum=0,x,orignalnum;
    printf("Enter a number :");
    scanf("%d", &num);
    orignalnum = num;
    while(orignalnum != 0){
        x = orignalnum%10;
        sum += x * x * x;
        orignalnum /= 10;
    }
    if (sum==num){
        printf("It is a armstrong number");
    }
    else{
        printf("It is not a armstrong number");
    }
    return 0;
    
}