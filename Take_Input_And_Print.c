#include<stdio.h>
#include<string.h>
int main()
{
char ch[100],ch1[100];
scanf("%[^
]s",&ch);
scanf("%[^
]s",&ch1);
strcat(ch,ch1);
printf("%s ",ch);
}