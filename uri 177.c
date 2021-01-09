#include<stdio.h>
int main()
{
    long long int a,b,c=0,i,j,k;
    scanf("%lld",&a);
    for(i=0;i<1000;i++)
    {
        if(c>=a)
        {
            c=0;
        }
        for(j=c;j<a;j++)
        {
          printf("N[%lld] = %lld\n",i,j);
          c=c+1;
          break;
        }

    }
    return 0;
}
