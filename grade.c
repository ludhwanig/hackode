#include<stdio.h>
void main()
{
int m,p,h,e,c,avg;
printf("maths =");
scanf("%d",&m);
printf("physics =");
scanf("%d",&p);
printf("chem =");
scanf("%d",&h);
printf("English =");
scanf("%d",&e);
printf("comp =");
scanf("%d",&c);

avg=(m+p+h+e+c)/5;

if(avg>=90)
 {
 printf("GRADE A");
}
else if(avg>=80)
{
printf("GRADE B");
}
else if(avg>=70)
{
printf("GRADE C");
}
else if(avg>=60)
{
printf("GRADE D");
}
else if(avg>=40)
{
printf("GRADE E");
}
else
printf("fail");
}
