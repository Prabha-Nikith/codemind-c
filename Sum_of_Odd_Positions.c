
#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int a[N],i,sum=0;
    for(i=1;i<=N;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=N;i++)
    {
        if(i%2==0)
        sum=sum+a[i];
    }
    printf("%d ",sum);
}
