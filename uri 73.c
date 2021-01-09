#include<stdio.h>
int main()
{
    long long int a,b,i,j;
    scanf("%lld",&a);
    if(a>5 && a<2000)
    {
        for(i=1; i<=a ;i++)
      {
          j=i;
        if(j%2==0)
        {
            b=j*j;
            printf("%lld^%lld = %lld\n",j,j,b);
        }
      }
    }
    return 0;
}
