#include<stdio.h>
int main()
{
    int n,i,j,k;
    long long int a,b,c,d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld%lld",&a,&b);
        if(a>0 && b>0 )
        {
            if(a%10==b%10 && a>=b)
            {
                printf("encaixa\n");
            }
            else
                printf("nao encaixa\n");

        }
    }
    return 0;
}
