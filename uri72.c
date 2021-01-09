#include<stdio.h>
int main()
{
    long long int n,a,i=0,j=0,k=0;
    scanf("%lld",&n);
    long long int ar[n];
    {
        for(i=0;i<n;i++)
        {
        scanf("%lld",&ar[i]);
        }
    }
    for(j=0;j<n;j++)
    {
        if (ar[j]>=10 && ar[j]<=20)
        {
        k++ ;
        }
    }
    a=n-k;
    printf("%lld in\n",k);
    printf("%lld out\n",a);

 return 0;
}
