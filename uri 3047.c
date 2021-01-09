#include<stdio.h>
int main()
{
    int a,b,c,d,i;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a>=40 && a<=110 && b>=1 && b<a && c>=1 && c<a && b!=c)
    {
        d=a-(b+c);
        if(d>=b && d>=c)
            printf("%d\n",d);
        else if(b>c && b>=d)
            printf("%d\n",b);
        else if(c>b && c>=d)
            printf("%d\n",c);
    }
    return 0;
}
