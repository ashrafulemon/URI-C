#include<stdio.h>
int main()
{
    double a,b,c,i,j,k;
    scanf("%lf%lf",&a,&b);
    c=b-a;
    i=(c*100)/a;
    printf("%.2lf%%\n",i);
    return 0;
}
