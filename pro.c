#include<stdio.h>
void main()
{
int i,f=1,sum=0;
float p;
for(i=1;i<=10;i++)
{
f=f*i;

sum=sum+i/f;
}
printf("The sum is %d",sum);

}
