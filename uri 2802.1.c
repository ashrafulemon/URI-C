#include<stdio.h>
#include<math.h>
long long int fact(long long int a)
{
    long long int i=1,j=1;
    for(i=1;i<=a;i++){
        j=i*j;
    }
    return j;
}
int main()
{
    long long int a,b,c,d,e;
    scanf("%lld",&a);
    if(a<4 && a>0)
    {
        e=a-1;
        d=pow(2,e);
    }
    else if(a>=4 && a<=1000){
    b=fact(a)/(fact(4)*fact(a-4));
    c=fact(a)/(fact(2)*fact(a-2));
    d=b+c+1;
    }
    printf("%lld\n",d);
    return 0;
}
