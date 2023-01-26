#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a,b,sum=0,i;
    for(i=1;i<=n;i++)
    {
        scanf("%d%d",&a,&b);
        sum=a+b;
        printf("%d
",sum);
    }
}