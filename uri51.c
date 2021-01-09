#include<stdio.h>
int main()
{
    double a,c,d,b,e;
    scanf("%lf",&a);
    if(a>=0 && a <=2000)
    {
       printf("Isento\n");
    }

     else if(a>2000 && a <=3000)
     {
         a=a-2000;
         b=a*.08;
         e=b;
        printf("R$ %.2lf\n",e);
    }
     else if(a>3000 && a <=4500)
    {
         a=a-3000;
         b=1000*.08;
         c=a*.18;
         e=c+b;
        printf("R$ %.2lf\n",e);
    }
     else if(a>4500)
    {
         a=a-4500;
         b=1000*.08;
         c=1500*.18;
         d=a*.28;
         e=c+b+d;
        printf("R$ %.2lf\n",e);
    }

  return 0;
}
