#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,e,f,g;
    scanf("%f%f%f",&a,&b,&c);
    e=(b*b)-4*a*c;
    if(e>=0 && a!=0.0)
    {
        g=sqrt(e);
        d=(-b+g)/(2 *a);
        f=(-b-g)/(2 *a);
        printf("R1 = %.5f\n",d);
        printf("R2 = %.5f\n",f);
    }
    else
        printf("Impossivel calcular\n");

    return 0;
}
