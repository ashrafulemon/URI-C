#include<stdio.h>

int main()
{
    int a,b,c,i,j,k;
    float d,e,f;

    while(scanf("%d%d%d",&a,&b,&c)!=EOF){
            f= sqrt(1.00*(12*12) +(a*a));
            d=12*1.00/b;
            e=f*1.00/c;
           // printf("%f %f %f\n",f,d,e);
            if(e<=d)
                printf("S\n");
            else
                printf("N\n");
    }
    return 0;
}
