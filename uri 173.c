#include<stdio.h>
int main()
{
    int n,a,b,c,i,j,k;
    int ar[10];
    scanf("%d",&n);
    a=n;
    for(i=0;i<10;i++)
    {
        printf("N[%d] = %d\n",i,a);
        a=a*2;
    }
    return 0;
}
