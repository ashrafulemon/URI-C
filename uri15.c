#include<stdio.h>
#include<math.h>
int main()
{
    double X1,Y1,X2,Y2,a,b,c;
    scanf("%lf%lf",&X1,&Y1);
    scanf("%lf%lf",&X2,&Y2);
    b=(X2-X1);
    c=(Y2-Y1);
    a=sqrt((b*b)+(c*c));
    printf("%.4lf\n",a);
    return 0;


}
