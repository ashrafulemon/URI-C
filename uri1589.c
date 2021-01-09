#include<stdio.h>
int main()
{
    long long int a,b,c,i,j,k;
    scanf("%lld",&a);
    for(i=0;i<a;i++)
    {
        scanf("%lld%lld",&b,&c);
        k=b+c;
        printf("%lld\n",k);
    }
    return 0;

}
