#include<stdio.h>
int main()
{
    float a,b,c,d;
    int i,j,k;
    float ar[100];
    for(i=0;i<100;i++)
    {
        scanf("%f",&ar[i]);
    }
    for(i=0;i<100;i++)
    {
        if(ar[i]<=10 )
        {
            printf("A[%d] = %.1f\n",i,ar[i]);
        }
    }
    return 0;
}
