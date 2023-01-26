#include<stdio.h>
int main()
{
    int l,b,w,c,cost,a1,a2,a3;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    a1=(l+2*w)*(b+2*w);
    a2=l*b;
    a3=a1-a2;
    cost=c*a3;
    printf("%d",cost);
}