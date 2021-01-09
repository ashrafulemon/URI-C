#include<stdio.h>
int main()
{
    double a,b,c,d;
    int i,j,k;
    scanf("%lf",&a);
    for(i=0;i<100;i++)
    {
        printf("N[%d] = %.4lf\n",i,a);
        a=a*1.00/2;
    }
    return 0;
}
