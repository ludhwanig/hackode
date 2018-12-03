#include<stdio.h>
void add(int i)
{
if(i>0&&i<=100)
{printf("%d\n",i);
i++;
add(i);
}
}
int main(void)
{int i;
printf("ENTER 1");
scanf("%d",&i);
add(i);
}
