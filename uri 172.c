#include<stdio.h>
int main()
{
    int a,b,c,i,j;
    int ar[10];
    for(i=0;i<10;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<10;i++)
    {
        if(ar[i]==0 || ar[i]<0)
        {
            printf("X[%d] = 1\n",i);
        }
        else
            printf("X[%d] = %d\n",i,ar[i]);
    }
    return 0;
}
