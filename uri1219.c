#include<stdio.h>
#include<math.h>
#define PI 3.1415926535897
int main()
{
    double a,b,c,i,j,k;
    double d,e,f,g,h,p,a1,a2,a3;
    while(scanf("%lf%lf%lf",&a,&b,&c)!=EOF)
    {
        p=(a+b+c)*1.00/2;
        e=sqrt(p*(p-a)*(p-b)*(p-c)); //triangle
        d=e*1.00/p;
        a1=PI*d*d;//circle
        a2=e-a1;

        f=(a*b*c)*1.00/(sqrt((a+b+c)*(b+c-a)*(a+b-c)*(a+c-b)));
        g=PI*f*f; //circle
        a3=g-a1-a2;
        printf("%.4lf %.4lf %.4lf\n",a3,a2,a1);
    }
    return 0;
}
