#include<stdio.h>
int main()
{
    int n,n1,i,hcf;
    scanf("%d%d",&n,&n1);
    for(i=1;i<=n,i<=n1;i++)
    {
        if(n%i==0&&n1%i==0)
        {
            hcf=i;
        }
    }
    printf("%d",hcf);
}