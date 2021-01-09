#include<stdio.h>
int main()
{
    long long int b,c,i,j,a;
    scanf("%lld",&a);
    if(a>2 && a<1000)
    {
        for (i=1;i<11;i++)
        {
            b=i*a;
            printf("%lld x %lld = %lld\n",i,a,b);
        }
    }
    return 0;
}
