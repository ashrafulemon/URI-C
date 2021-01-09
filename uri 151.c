#include<stdio.h>
int main()
{
    int a=0,b=1,c,n,i,j,k;
    scanf("%d",&n);
    int ar[n];
    for(i=1;i<=n;i++)
    {
        printf("%d",a);
        c=a+b;
        a=b;
        b=c;
        if(i!=n)
        {
            printf(" ");
        }
        if(i==n)
        {
            printf("\n");
        }
    }
    return 0;
}

