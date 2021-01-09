#include<stdio.h>
int main()
{
    long long int a,b,c,i,j,k;
    while(scanf("%lld%lld",&a,&b)){
        if(a==0 && b==0)
            return 0;
        c=a*b;
        printf("%lld\n",c);
    }
    return 0;
}
