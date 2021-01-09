#include<stdio.h>
int main()
{
    long long int a,b,c,i,j;
    while(scanf("%lld%lld",&a,&b)!=EOF)
    {
        if(a>=b){
            c=a-b;
        }
        if(a<b){
            c=b-a;
        }
        printf("%lld\n",c);
    }
    return 0;
}
