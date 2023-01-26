#include<stdio.h>
int main()
{
    int l,n,i,a,b;
    scanf("%d%d",&l,&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a,&b);
        if(a<l||b<l)
        {
            printf("UPLOAD ANOTHER
");
        }
        else if(a==b)
        {
            printf("ACCEPTED
");
        }
        else 
        {
            printf("CROP IT
");
        }
    }
}