#include<stdio.h>
int main()
{
    float a,b,c,d,e;
    scanf("%f%f%f",&a,&b,&c);
    if((a+b)>c && (a+c)>b && (b+c)>a)
    {
    d=a+b+c;
    printf("Perimetro = %.1f\n",d);
    }
    else
    {
    e=.5*(a+b)*c;
    printf("Area = %.1f\n",e);
    }
    return 0;
}
