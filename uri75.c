#include<stdio.h>
int main()
{
    long long int a,b,c,i=0,j=0;
    scanf("%lld",&a);
    if(a<10000)
    {
        for(i=0;i<10000;i++)
        {
            if(i%a==0)
            {
                b=i+2;
                if(b<10000){
                printf("%d\n",b);
                }
            }
        }

    }
    return 0;
}
