#include<stdio.h>
#include<math.h>

int main()
{
    unsigned long long int   a,b,c,i;
    scanf("%lld%lld",&a,&b);
    if(a>=1 && a<=100000 && b>=1 && b<=100000){
    c=a%b;
    printf("%lld\n",c);
    }
    return 0;
}

