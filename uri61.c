#include<stdio.h>
int main()
{
    int a,b,c,d,a1,b1,c1,d1,e,f,g,h,i,j,k,m,n,o,p,t;
    scanf("%*s %d",&a);
    scanf("%d %*s",&b);
    scanf("%d %*s",&c);
    scanf("%d",&d);
    scanf("%*s %d",&a1);
    scanf("%d %*s",&b1);
    scanf("%d %*s",&c1);
    scanf("%d",&d1);
    e=(a*86400)+(b*3600)+(c*60)+(d);
    f=(a1*86400)+(b1*3600)+(c1*60)+(d1);
    g=f-e;
    h=g/86400;
    i=g%86400;
    j=i/3600;
    k=i%3600;
    m=k/60;
    n=k%60;
    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",h,j,m,n);
    return 0;
}
