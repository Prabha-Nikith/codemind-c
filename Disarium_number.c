#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,s=0,i,m,q,n1;
    scanf("%d",&n);
    m=log10(n)+1;
    q=n;
    while(q!=0)
    {
        r=q%10;
        q=q/10;
        n1=pow(r,m);
        s=s+n1;
        m--;
    }
    if(n==s)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}