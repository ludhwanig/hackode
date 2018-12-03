#include<stdio.h>
void main()
{
int arm,num,i,m,n,rem;
printf("enter the limitis");
scanf("%d%d",&m,&n);
for(;m<=n;m++)
{
arm=0;
rem=m;
for(;rem!=0;rem/=10)
arm=arm+((rem%10)*(rem%10)*(rem%10));
if(m==arm)
printf("%d\n",m);
}
}
