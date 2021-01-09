#include<stdio.h>
#include<math.h>
int main()
{
    double A,B,C,a,b,c,d,e,pi;
    scanf("%lf%lf%lf",&A,&B,&C);
    pi=3.14159;
    a=.5*A*C;
    b=pi*C*C;
    c=.5*(A+B)*C;
    d=B*B;
    e=A*B;
    printf("TRIANGULO: %.3lf\n",a);
    printf("CIRCULO: %.3lf\n",b);
    printf("TRAPEZIO: %.3lf\n",c);
    printf("QUADRADO: %.3lf\n",d);
    printf("RETANGULO: %.3lf\n",e);
    return 0;

}
