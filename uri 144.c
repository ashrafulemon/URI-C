#include<stdio.h>
int main()
{
    long long int a,b,c,d,k,e,f;
    int i,j=1;
    scanf("%lld",&a);
    if(a>0 && a<1000)
    {
    for(i=j;i<=a;i++)
    {
        d=i;
        b=i*i;
        c=i*i*i;
        e=i*i+1;
        f=i*i*i+1;
        printf("%lld %lld %lld\n",d,b,c);
        printf("%lld %lld %lld\n",d,e,f);

    }
    }
   return 0;
}

