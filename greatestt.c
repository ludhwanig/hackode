#include<stdio.h>
#include<conio.h>
main()
{
int a,b,c,num;
printf("enter the value of a ,b and c");
scanf("%d%d%d",&a,&b,&c);
num=(a>=b)?(a>=c?a:c):(b>=c?b:c);
printf("the greatest value is =%d",num);

}
