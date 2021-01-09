#include<stdio.h>
int main()
{
    int j,k;
    long long int a, b,i ,d,e,f,g;
    scanf("%lld%lld",&a,&d);
    if( a>1 && a<20 && d>a && d<100000)
    {
    long long int ar[d];
    for (i=1;i<=d;i++)
    {
     b=i;
     printf("%lld",b);
     if(d==i)
     {
     printf("\n");
     break;
     }
     if(b%a==0)
     {
      printf("\n");
     }
     if(b%a!=0)
     {
     printf(" ");
     }
    }
    }
    return 0;
}
