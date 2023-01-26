#include<stdio.h>
int main()
{
    int n,n1=0,n2=1,s=0,i,c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=n1+n2;
        if(s==n)
        {
            c++;
        }
        n1=n2;
        n2=s;
    }
    if(c!=0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}