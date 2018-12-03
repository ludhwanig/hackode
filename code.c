#include <stdio.h>
void main(){

	long int ISBN,sum=0,count=0,i;
	long r,temp;
	scanf("%d", &ISBN);
	temp=ISBN;
	while(ISBN>0)
	{
	r=ISBN%10;
	count++;
	ISBN=ISBN/10;
	}

if(count==10)
{


for(i=10;i>=1;i--)
	  {   r=temp%10;
	      sum+=i*r;
	      temp=temp/10;
      }

	  if(sum%11==0)
	  printf("LEGAL ISBN");
	  else
	  printf("illegal ISBN");
	 }
else{
	 printf("illegal ISBN");
}

}

