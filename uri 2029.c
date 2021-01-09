#include<stdio.h>
#include<math.h>
#define PI 3.14
int main()
{
    double a,b,c,d,i,j,k,r,h,v,x,y,z,p=3.14;
    while(scanf("%lf%lf",&v,&d)!=EOF){
      h=(4*v)/(p*pow(d,2));
      r=sqrt(v)/sqrt(p*h);
      b=p*r*r;
     // a=(2*p*r*h)+(2*p*r*r);
      printf("ALTURA = %.2lf\n",h);
     // printf(" = %.2lf\n",r);
      printf("AREA = %.2lf\n",b);
    }
    return 0;
}
