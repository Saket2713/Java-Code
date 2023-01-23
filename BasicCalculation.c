#include<stdio.h>
int main(){
    float num1,num2,add,sub,multiply,divide,percentage;
    int num3,num4,remainder;
    printf("Enter Two number:");
    scanf("%f %f", &num1,&num2);
    printf("Enter two number for remainder:");
    scanf("%d %d",&num3,&num4);
    add=num1+num2;
    sub=num1-num2;
    multiply= num1*num2;
    divide= num1/num2;
    remainder= num3%num4;
    percentage= (num1/(num1+num2)) * 100;
    printf("Addition:%f + %f =:%f \n",num1,num2,add);
    printf("Subtract:%f - %f = %f \n", num1,num2,sub);
    printf("Multiply:%f * %f = %f \n", num1,num2,multiply);
    printf("Divide:%f / %f = %f \n", num1,num2,divide);
    printf("Remainder:%d %% %d = %d \n", num3,num4,remainder);
    printf("Percentage:%f / %f * 100 = %f \n", num1,add,percentage);
    return 0;
}

