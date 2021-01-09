#include<stdio.h>
int main()
{
    long long int a,b,c,d,k;
    int i,j=1;
    scanf("%lld",&a);
    if(a>0 && a<1000)
    {
    for(i=j;i<=a;i++)
    {
        d=i;
        b=i*i;
        c=i*i*i;
        printf("%lld %lld %lld \n",d,b,c);
    }
    }
   return 0;
}
