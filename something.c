#include<stdio.h>
void main()
{
int a=0,z,n,d1,d2,d3,d4,sum=0;
printf("enter the value z");
scanf("%d",&z);
printf("enter the value n");
scanf("%d",&n);
if(z>=0)
    {
        d1=z%10;

     sum=sum+d1;
     z=z/10;
      if(d1==n)
     {
         a++;
     }


     d2=z%10;

     sum=sum+d2;
     z=z/10;
      if(d2==n)
     {
         a++;
         }

     d3=z%10;

     sum=sum+d3;
     z=z/10;
      if(d3==n)
     {
         a++;
         }
     d4=z%10;

     sum=sum+d4;
     z=z/10;
      if(d4==n)
     {
         a++;
         }
     printf("the sum of z is %d",sum);



     printf("the value of n is %d",a);

    }

}







