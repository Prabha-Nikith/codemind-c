
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,x;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            if(i%2!=0)
            {
                x=0;
            }
            else
            {
                x=1;
                break;
            }
        }
    }
    if(x!=0)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
}
