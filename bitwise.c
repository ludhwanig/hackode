#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the value of a and b");
    scanf("%d%d",&a,&b);
    c=a&b;
    printf("the value of c=%d",c);
    c=a|b;
    printf("\nthe value of c=%d",c);
    c=~a;
    printf("\nthe value of c=%d",c);
    c=a^b;
    printf("\nthe value of c=%d",c);
    c=a>>2;
    printf("\nthe value of c=%d",c);
    c=a<<2;
    printf("\nthe value of c=%d",c);
}
