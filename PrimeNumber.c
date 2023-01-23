#include<stdio.h>
int main(){
    int num,i;
    printf("Enter a number:");
    scanf("%d", &num);
    for(i= 2; i<=num/2; i++){
        if(num%i==0){
            printf("It is not a prime number");
            break;
        }
        else{
            printf("Prime Number");
        }
    
    }
    return 0;
}
