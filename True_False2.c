#include<stdio.h>    //if strings are same strcmp gives value 0
#include<string.h>
int main(){
    char day [20], wheather [20];
    int x,y;
    char a[20] ="sunday";
    char b[20]="snowing";
    printf("Enter Day:");
    scanf("%s", &day);
    printf("Enter Wheather:");
    scanf("%s",&wheather);
    x=strcmp(day, a);
    y=strcmp(wheather, b);
    if (x==0){
        if(y==0){
            printf("True");
        }
        else{printf("False");
        }
    }     
    else{
        printf("F");
    }
    return 0;

}
