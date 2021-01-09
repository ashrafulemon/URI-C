#include<stdio.h>
int main()
{
    long long int a,b=1,c,d,i,j,k;
    scanf("%lld",&a);
    for(i=2;i<=a;i++){
        b=b*i;
    }
    printf("%lld\n",b);
    for(j=1;j<1000000;j++){
        b=b/10;
        if(b==0){
            break;
        }
    }
    printf("%lld\n",j);
    return 0;
}
