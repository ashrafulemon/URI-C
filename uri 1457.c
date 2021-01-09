
#include<stdio.h>
#include<string.h>
int main()
{
    long long int a,b,d,c,f,i,j,k;
    scanf("%lld",&a);
    for(i=0;i<a;i++){
        c=0;
        char ar[1000];
        scanf("%lld",&b);
        scanf("%s",ar);
        //printf("%lld %s\n",b,ar);
        f=strlen(ar);
        //printf("%lld\n",f);
        for(j=0;j<b;j++){
            if(j!=0){
                d=b-(j*f);
                if(d>0)
                    c=c*d;
                else
                    break;
            }
            else
                c=b;
        }
        printf("%lld\n",c);
    }
    return 0;
}
