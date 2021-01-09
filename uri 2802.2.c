#include<stdio.h>
#include<math.h>

int main()
{
    long long int a,b,c,d,e,i,j=1,k=1,l=1;
    scanf("%lld",&a);
    if(a<=4 && a>0)
    {
        e=a-1;
        d=pow(2,e);
        printf("%lld\n",d);
    }
    else if(a>4 && a<=1000){
        for(i=a;i>a-4;i--){
            j=i*j;
        }
        for(i=a;i>a-2;i--){
            k=i*k;
        }
        b=j/24;
        c=k/2;
        d=b+c+1;
        printf("%lld\n",d);
    }

    return 0;
}

