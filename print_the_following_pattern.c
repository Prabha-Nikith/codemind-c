#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    for(b=a;b>0;b--)
    {
        for(c=1;c<=b;c++)
        printf("%d",c);
        printf("
");
    }
}    

