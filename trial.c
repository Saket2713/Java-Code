#include<stdio.h>

int max(int *x,int *y){
    int max;
    if(*x > *y){
        max = *x;
    }
    else{
        max = *y;
    }
    return max;
}


int main(){
    int a,b;
    a=10, b=20;
    int x = max(&a, &b);
    printf("%d", x);
    return 0;

}

