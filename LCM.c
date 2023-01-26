#include<stdio.h>
int main()
{
    int a,b,i=0;
    scanf("%d%d",&a,&b);
    while(1)
    {
        i++;
        if((a*i)%b==0)
        {
            break;
        }
    }
    printf("%d",a*i);
}