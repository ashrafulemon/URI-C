#include<stdio.h>
#include<math.h>
int main()
{
    double c,b, a;
    scanf("%lf",&a);
    b=a/log(a);
    c=1.25506*b;
    printf("%.1lf %.1lf",b,c);
    return 0;
}
