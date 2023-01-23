#include<stdio.h>
int main(){
    int a,b,perimeter;
    printf("Enter two number:");
    scanf("%d %d", &a,&b);
    perimeter=2*a + 2*b;
    printf("perimeter of rectangle is : %d", perimeter);
    return 0;
}
