#include<stdio.h>
int main()
{
    unsigned long long int a,b,c,d,i,k,j;
    while(scanf("%llu",&a))
    {
        if(a==-1)
            return 0;
        if(a==0)
            printf("0\n");
        if(a>0){
            a=a-1;
            printf("%llu\n",a);
        }
    }
    return 0;
}
