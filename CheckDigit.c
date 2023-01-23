#include<stdio.h>
#include<ctype.h>      //if not given implicit declaration warning is given in line 7
int main(){
    char a;
    printf("Enter: ");
    scanf("%c", &a);
    if(isdigit(a)== 0){
        printf("It is not a digit");
    }
    else{
        printf("It is a digit");
    }  
}