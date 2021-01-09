#include<stdio.h>
int main()
{
    long long int a,b,c,d,e,i,j,k;
    while(scanf("%lld%lld%lld",&a,&b,&c)!=EOF){
    for(i=0;i<c;i++){
       scanf("%lld%lld",&d,&e);
       if(e<=a && d<=b || e<=b && d<=a)
            printf("Sim\n");
        else
            printf("Nao\n");
    }
    }
    return 0;
}
