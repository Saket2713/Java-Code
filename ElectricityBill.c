#include<stdio.h>
void main(){
    char name[100], address[1000], Billmonth[100];
    int cut_id,pincode;
    float Billamt;
    printf("Enter Your Name:");
    gets(name);
    printf("Enter Your Address:");
    gets(address);
    printf("Enter your customer ID:");
    scanf("%d", &cut_id);
    printf("Enter your pincode:");
    scanf("%d", &pincode);
    printf("Enter the Bill amount:");
    scanf("%f", &Billamt);
    printf("Month Of the Bill:");
    scanf("%s", Billmonth);

    printf("Your Details are as follow:-\n");
    printf("Name:");
    puts(name );
    printf("\n");
    printf("Address:");
    puts(address );
    printf("\n");
    printf("Customer ID:%d \n", cut_id);
    printf("Pincode:%d \n", pincode);
    printf("Bill Amount:%f\n", Billamt);
    printf("Month of Bill:%s", Billmonth);
    

}