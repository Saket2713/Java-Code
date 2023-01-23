#include<stdio.h>            //sum of two sides should be greater than third side
#include<math.h>
int main(){
    float a,b,c;
    float s,Area;
    printf("Note: sum of two sides should be greater than third side \n");
    printf("Enter length of sides of Triangle:");
    scanf("%f %f %f", &a,&b,&c);
    s =(a+b+c)/2;
    Area=sqrt(s*(s-a)*(s-b)*(s-c));

    printf("The semi perimeter of triangle is :%f", s);
    printf("The area of Triangle is:%f", Area);
    return 0;
}