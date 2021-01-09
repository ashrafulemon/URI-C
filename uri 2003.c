#include<stdio.h>
int main()
{
    int a,b,c,d,i,j,k;
    while(scanf("%d:%d",&a,&b)!=EOF)
    {
        if(a<7)
            d=0;
        else if(a==7)
            d=b;
        else if(a>7)
            {
               if(a==8)
               d=60+b;
               else if(a==9)
               d=120+b;
            }
        printf("Atraso maximo: %d\n",d);
    }
    return 0;
}
