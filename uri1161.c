#include<stdio.h>
int main()
{
    long long int a,b,i,j,c,d,e;
    while(scanf("%lld%lld",&a,&b)!=EOF)
 {
    if(a>=0 && a<=20 && b>=0 && b<=20)
  {
    c=1;
    d=1;
    for(i=1;i<=a;i++)
  {
    c=i*c;
  }
    for(j=1;j<=b;j++)
  {
    d=j*d;
  }
    e=c+d;
    printf("%lld\n",e);
  }
 }
    return 0;
}

