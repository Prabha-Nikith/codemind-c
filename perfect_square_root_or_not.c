#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s=sqrt(n);
    if(n==(s*s))
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}