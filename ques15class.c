#include<stdio.h>
#include<string.h>
void stringCpy(char* s1,char* s2);
int stringCmp(char* s1,char* s2);
int stringLen(char*);
void stringCon(char* s5,char* s6);
void stringRev(char*);
 int main()
 {
 char str1[100],str2[100];
 printf("enter string 1 :");
 scanf("%[^\n]s",str1);
 fflush(stdin);
 stringCpy(str2,str1);
 printf("string 1 : %s \n string 2 :%s\n",str1,str2);

 char str4[100],str3[100];
  printf("enter string 3 :");
 scanf("%[^\n]s",str3);
 fflush(stdin);
 printf("enter string 4 :");
 scanf("%[^\n]s",str4);
 fflush(stdin);
 if(stringCpm(str3,str4)==0)
    printf("\nstrings are same\n");
 else

printf("\nstrings are not same\n");
int length=stringLen(str3);
printf("length is :%d\n",length);

 char str5[100],str6[100];
  printf("enter string 5 :");
 scanf("%[^\n]s",str5);
 fflush(stdin);
 printf("enter string 6 :");
 scanf("%[^\n]s",str6);
 fflush(stdin);
stringCon(str5,str6);
printf("\n concatenated sting is %s\n",str5);
stringRev(str1);

 }
 void stringCpy(char* s1,char* s2)
 { int i=0;
 while(s2[i]!='\0')
 {


 s1[i]=s2[i];
 i++;
 }
 s1[i]='\0';
 }

 void stringCpm(char* s3,char* s4)
 { int i=0;
 while(s3[i]!='\0')
 {

if(s3[i]!=s4[i])
 return 1;
 i++;
 }
 return 0;
 }
 int stringLen(char* s)
 {
     int i=0,count=0;
     while(s[i]!='\0')
     {
       i++;
       count++;
     }
     return count;
 }
void stringCon(char* s5,char* s6)
{
   if (stringLen(s5)+stringLen(s6)>=100)
   {
       printf("\n cannot cat strings \n");
       return;
   }
   int len=stringLen(s5),j=0;
   for(j=0;j<stringLen(s5);j++)
    s5[len+j]=s6[j];

}
void stringRev(char*s)
{

    int i,j;
    char s2[100];
int len=stringLen(s)-1;
    for(i=0;j=len;j<len;i++;j--)
{
    s2[i]=s[j];
}

    s2[i]='\0';

printf("\reversed string is :%s",s);
}
