
#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,d;
    scanf("%lf",&a);
    b=(1+sqrt(5))/2;
    c=(1-sqrt(5))/2;
    b=pow(b,a);
    c=pow(c,a);
    d=(b-c)/sqrt(5);
    printf("%.1lf",d);

    return 0;
}
