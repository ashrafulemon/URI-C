#include<stdio.h>
int main()
{
    double e=0,f=0,g=0,n=0,o=0,p=0,b[1000],c[1000],d[1000],h[1000],l[1000],m[1000];
    int a,i,j,k;

    char ar[1000];
    scanf("%d%*c",&a);
    for(i=0;i<a;i++)
    {
        //printf("asa\n");
        scanf("%s%*c",ar);
        scanf("%lf%lf%lf",&b[i],&c[i],&d[i]);
        scanf("%lf%lf%lf%*c",&l[i],&h[i],&m[i]);
        e=e+b[i];
        f=f+c[i];
        g=g+d[i];
        n=n+l[i];
        o=o+h[i];
        p=p+m[i];
    }
    e=n*100/e;
    f=o*100/f;
    g=p*100/g;
    printf("Pontos de Saque: %.2lf %%.\nPontos de Bloqueio: %.2lf %%.\nPontos de Ataque: %.2lf %%.\n",e,f,g);
    return 0;
}

