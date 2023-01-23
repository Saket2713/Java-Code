#include<stdio.h>
int main(){
    float F, C;
    printf("Enter the temprature in Fahrenheit:");
    scanf("%f", &F);
    C=(F-32)*0.5555;
    printf("Temprature is:%f celcius", C);
    return 0 ;
      
}