#include<stdio.h>
int pall(int n)
{
    int r,s=0;
    r=n;
    while(n>0)
    {
        s=s*10+n%10;
        n=n/10;
    }
    if(r==s)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int x,y,n;
    scanf("%d",&n);
    for(x=n-1;;x--)
    {
        if(pall(x))
        {
            break;
        }
    }
    for(y=n+1;;y++)
    {
        if(pall(y))
        {
            break;
        }
    }
    if(x-n==n-y)
    {
        printf("%d %d",x,y);
    }
    else if(x-n>n-y)
    {
        printf("%d",x);
    }
    else
    {
        printf("%d",y);
    }
}