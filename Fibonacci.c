#include<stdio.h>
void printFibonacci(int num);

int main(){
    int num;
    printf("Enter the nth number:");
    scanf("%d", &num);
    printf("Fibonacci series:");
    printf("%d %d ", 0,1);
    printFibonacci(num-2);
    return 0;

}
void printFibonacci(int num){
    static int n1=0,n2=1,n3;
    if(num > 0){
        n3=n1+n2;
        n1=n2;
        n2=n3;
        printf("%d ", n3);
        printFibonacci(num-1);
    }
}