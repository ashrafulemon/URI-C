#include<stdio.h>
int main()
{
    int a,b,c,d;
    float e,f,t;
    scanf("%d%d%f",&a,&b,&e);
    scanf("%d%d%f",&c,&d,&f);
    t=(b*e)+(d*f);
    printf("VALOR A PAGAR: R$ %.2f\n",t);
    return 0;
}
