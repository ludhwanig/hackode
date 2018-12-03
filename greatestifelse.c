#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the value of a,b and c");
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b)
        if(a>=c)
        printf("a is the greatest %d",a);
         else
            printf("c is the greatest %d",c);
   else if(b>=a)
         if(b>=c)
         printf("b is the greatest %d",b);
          else
            printf("c is the greatest  %d",c);
}
