#include<stdio.h>
#include<math.h>
int main()
{
    long long int a,b,c,i,j,k,l,m,n,o,p,q,r;
    scanf("%lld%lld",&a,&b);
    c=a*b;
    i=ceil(c*.10);
    j=ceil(c*.20);
    k=ceil(c*.30);
    l=ceil(c*.40);
    m=ceil(c*.50);
    n=ceil(c*.60);
    o=ceil(c*.70);
    p=ceil(c*.80);
    q=ceil(c*.90);
    printf("%lld %lld %lld %lld %lld %lld %lld %lld %lld\n",i,j,k,l,m,n,o,p,q);
    return 0;
}
