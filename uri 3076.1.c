#include<stdio.h>
int main()
{
    long long int a,b,c,i,j,k;
    while(scanf("%lld",&a)!=EOF)
    {
        b = ceil(a*.01);
        printf("%lld\n",b);
    }
    return 0;
}
