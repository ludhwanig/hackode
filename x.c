#include<stdio.h>

typedef struct database{
    char name[20];
    int qua;
    float price;
}db;

void main()
{
  db db1,*ptr_db1;
  ptr_db1 = &db1;

  printf("Name : ");
  scanf("%s",ptr_db1 ->name);
  printf("Quantity : ");
  scanf("%d", &ptr_db1 ->qua);
  printf("Price : ");
  scanf("%f", &ptr_db1 ->price);

  printf("Name : %s\n",db1.name);
  printf("Quantity : %d\n", db1.qua);
  printf("Price : %.2f\n", db1.price);
}
