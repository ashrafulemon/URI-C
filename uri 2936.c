#include<stdio.h>
int main()
{
    int a,b,c,d,i,j,k;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&i);
    a=a*300;
    b=b*1500;
    c=c*600;
    d=d*1000;
    i=i*150;
    j=a+b+c+d+i+225;
    printf("%d",j);
    return 0;
}
