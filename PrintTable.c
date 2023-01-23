#include<stdio.h>
int main(){
    int a;
    for(a=1;a<=10;a++ ){
        for(int i=1; i<=10;i++){
           printf("%d * %d= %d\n", a,i,a*i); 
        }
    }
    return 0;
}