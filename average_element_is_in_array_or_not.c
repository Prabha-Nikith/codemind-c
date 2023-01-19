#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    int x, avg;
    avg=sum/n;
    for(i=0;i<n;i++)
    {
        if(a[i]==avg)
        {
            x=0;
        }
    }
    if(x==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}