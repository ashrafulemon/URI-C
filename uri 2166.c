#include<stdio.h>
#include<math.h>
int main()
{
    double a,b=0,c;
    scanf("%lf",&a);
    while(a--)
    {
       b= b+2.00;
       b= 1.00/b;
    }
    b=b+1;
    printf("%.10lf\n",b);
    return 0;
}
