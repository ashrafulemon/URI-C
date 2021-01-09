
#include<stdio.h>
int main()
{
    int a=0,b=1,c,d,e,f,i,j,k,n;
    scanf("%d",&n);
    int ar[n];
    int arr[n];
    if(n>0)
    {
        printf("%d",a);
        if(n>1)
        {
           printf(" %d",b);
        }
        for(i=1;i<n;i++)
        {
           c=a+b;
           a=b;
           b=c;
           printf(" %d",c);
        }
    }
    return 0;
}
