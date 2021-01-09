#include<stdio.h>
int main()
{
    double a,b,c,i,j,k,l,m;
    while(scanf("%lf",&a)!=EOF){
        k=0;
        j=0;
        for(i=0;i<a;i++){
            scanf("%lf",&b);
            if(b==1)
                j=j+1;
        }
        l=2.00/3;
        m=j/a;
       // printf("%lf %lf\n",l,m);
        if(m>=l)
            printf("impeachment\n");
        else
            printf("acusacao arquivada\n");
    }
    return 0;
}
