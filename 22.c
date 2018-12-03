#include <stdio.h>

void main()
{
	float x,sum,temp;
	int i,n;
	printf("Input the value of x :");
	scanf("%f",&x);
	printf("Input number of terms : ");
	scanf("%d",&n);
	sum =1; temp = 1;
	for (i=1;i<n;i++)
	{
	  temp = temp*x/(float)i;
	  sum =sum+ temp;
	}
	printf("\nThe sum  is : %f\n",sum);
}
