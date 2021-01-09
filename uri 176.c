#include<stdio.h>
int main()
{
    long long int n,a,b,c,d,e,f,i,j,k;
    scanf("%lld",&n);
    long long int ar[n];
    for(i=0;i<n;i++){
        scanf("%lld",&ar[i]);
        a=0;
        b=1;
        for(j=0;j<ar[i];j++){
        c=a+b;
        a=b;
        b=c;
        }
     printf("Fib(%lld) = %lld\n",ar[i],a);
    }
     return 0;
}
