#include<stdio.h>
#include<string.h>
void main()
{
    char a[50],b[30],c[30],d[50];
    int q,i,j,k,l,m,n,o;
    scanf("%s",&a);
    int p=strlen(a);
    for(i=p-1;i>=0;i--)
    {
        if(a[i]=='.')
        {
            q=i;
            for(j=i;j<p;j++)
            {
                k=0;
                b[k]=a[j];
                k++;
            }
        }
        if(a[i]=='\\')
        {
            for(m=i+1;m<q;m++)
            {
                l=0;
                c[l]=a[m];
                l++;
            }
            for(n=0;n<=i;n++)
            {
                o=0;
                d[o]=a[n];
                o++;
            }
        }
        break;
    }
    printf("Path: %s\n",d);
    printf("File name: %s\n",c);
    printf("Extension: %s",b);


}
