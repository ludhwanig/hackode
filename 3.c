# include <stdio.h>

void main()
{
int arm,m,n,rem;

printf("Enter the limits : ") ;
scanf("%d%d",&m,&n) ;
for(;m<=n;m++)
{
    rem=m;
    arm=0;
    for(;rem!=0;rem/=10)
        arm=arm+((rem%10)*(rem%10)*(rem%10));
    if(m==arm)
        printf("armstrong %d \n",m);
}
}
