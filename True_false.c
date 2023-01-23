#include<stdio.h>
#include<string.h>
int main(){
    char day [20], wheather [20];
    printf("Enter Day:");
    scanf("%s", &day);
    printf("Enter Wheather:");
    scanf("%s",&wheather);
    if("%s"=="sunday", day){
        if("%s" =="snowing", wheather){
            printf("True");
        }
        else{
            printf("False");     
        }
    }    
    else{
        printf("wrong");
    }
    
    return 0;

}
