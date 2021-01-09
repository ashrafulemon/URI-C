#include<stdio.h>
int main()
{
    int a=0,b,c,d,i,j,k;
    int ar[20];
    for(i=0;i<20;i++)
    {
        scanf("%d",&ar[i]);
        a=a+1;
    }
    k=a-1;
    for(i=0;i<20;i++)
    {
        for(j=k;j>=0;j--)
        {
         printf("N[%d] = %d\n",i,ar[j]);
         k=k-1;
         break;
        }
    }
    return 0;
}
