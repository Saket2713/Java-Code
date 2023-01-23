#include<stdio.h>
int main(){
    int marks;
    printf("Enter marks:");
    scanf("%d", &marks);
    if(marks <= 30){                             //if(marks>30){}
        printf("You are fail \n");
    }
    else{
        printf("you are pass \n");
    }
    return 0;
}