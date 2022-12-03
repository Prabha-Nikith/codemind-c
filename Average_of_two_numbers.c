#include<stdio.h>
float avg(int a,int b)
{
    float c;
    c=(a+b)/2.0;
    return c;
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    float x=avg(a,b);
    printf("Average of %.2d and %.2d is: %0.2f",a,b,x);
}