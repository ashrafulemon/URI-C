
#include<stdio.h>
int main()
{
    long long int a,b,c=0,i,j,k;
    scanf("%lld%lld",&a,&b);
    for(i=a;i<=b;i++){
        c=c+i;
    }
    printf("%lld\n",c);
    return 0;
}
