#include<stdio.h>
int main()
{
    int a,b,c,i,j,k;
    long long int x,y=0,z;
    long long int ar[100];
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%lld",&ar[i]);
    }
    for(j=0;j<a;j++)
    {
        y=0;
        for(k=1;k<ar[j];k++)
        {
            if(ar[j]%k==0)
            {
                y=y+k;
            }
        }
        if(y==ar[j])
        {
            printf("%lld eh perfeito\n",ar[j]);
        }
        else
        printf("%lld nao eh perfeito\n",ar[j]);
    }
    return 0;
}
