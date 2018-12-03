#include<stdio.h>
#include<string.h>
void main()
{
    int l,i;
char ch[50];
printf("enter the string \n");
gets(ch);
l=strlen(ch);
for(i=0;i<l/2;i++)
{
    if(ch[i]!=ch[l-1-i])
    {
    printf("not palindrome");

    }
break;
}
if(i==l/2)
    printf("palindrome\n");
}
