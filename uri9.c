#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    double a,b,d;
    scanf("%s",&ch);
    scanf("%lf%lf",&a,&b);
    //c=b*.15;
    d=(b*.15)+a;

    printf("TOTAL = R$ %.2lf",d);
    return 0;
}
