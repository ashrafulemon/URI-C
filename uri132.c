#include<stdio.h>
int main()
{
    int a,b,c,d=0,i,j,k;
    int arr[100];
    int ar[100];
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        c=a;
        a=b;
        b=c;
    }
    for(i=a;i<=b;i++)
    {
        if(i%13!=0)
        {
          d=d+i;
        }
    }
    printf("%d",d);

    return 0;
}
