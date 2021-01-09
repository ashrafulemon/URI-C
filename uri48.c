#include<stdio.h>
int main()
{
    float a,c,d;
    int b;
    scanf("%f",&a);
    if(a>=0 && a <=400)
    {
        d=a*.15;
        c=a+d;
        b=15;
    }
      if(a>400 && a <=800)
     {
        d=a*.12;
        c=a+d;
        b=12;
    }
      if(a>800 && a <=1200)
    {
        d=a*.10;
        c=a+d;
        b=10;
    }
      if(a>1200 && a <=2000)
    {
        d=a*.07;
        c=a+d;
        b=7;
    }
      if(a>2000)
     {
        d=a*.04;
        c=a+d;
        b=4;
    }

    printf("Novo salario: %.2f\n",c);
    printf("Reajuste ganho: %.2f\n",d);
    printf("Em percentual: %d %%\n",b);
    return 0;
}
