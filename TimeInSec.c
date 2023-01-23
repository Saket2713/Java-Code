#include<stdio.h>
int main(){
    int days,hrs,min,sec;
    printf("Enter the seconds:");
    scanf("%d", &sec);
    if(sec>=60 && sec<3600 ){
        min=sec/60;
        sec=sec%60;
        printf("%d minute %d seconds",min,sec);
    }
    else if(sec>=3600 && sec<86400){
        hrs=sec/3600;
        min=(sec%3600)/60;
        sec=(sec%3600)%60;
        printf("%dhours %d minute %d seconds",hrs,min,sec);
    }
    else if(sec>=86400){
        days=(sec/86400);
        hrs=(sec%86400)/3600;
        min=((sec%86400)%3600)/60;
        sec=((sec%86400)%3600)%60;
        printf("%d days %d hours %d minute %d seconds",days,hrs,min,sec);
    }
    else{
        printf("%d seconds", sec);
    }

}