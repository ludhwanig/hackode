#include<stdio.h>
void main()
{
int num,a=0;
printf("enter the number");
scanf("%d",&num);
a=num%2;
switch(a)
{
case 0:
printf("even");
break;
case 1:
printf("odd");
break;
}
switch(num>0)
   {
    case 1:
    printf("\npositive");
    break;
    case 0:
        switch(num<0)
        {
        case 0:
            printf("\nnegative");
        }
        break;
        default :
            printf("zero");
   }
   printf("\n%lf",sqrt(num));
   a=num*num;
   printf("\n%d",a);


}
