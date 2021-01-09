#include<stdio.h>
int main()
{
    int a,b,c,d,i=0,j,k;
    scanf("%d\n%d\n%d",&a,&b,&c);
    if(a==b&& b==c)
        i=a*2+c*2;
    else if(a>=b && a>=c)
        i=b*2+c*4;
    else if(b>=a && b>=c)
        i=a*2+c*2;
    else if(c>=a && c>=b)
        i=a*4+b*2;

    printf("%d\n",i);
    return 0;
}
