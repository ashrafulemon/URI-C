#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    scanf("%d%d",&a,&b);
    if(a>=1 && a<=100 && b>=1 && b<=100){
    c=(a*b)+(a-1)*(b-1);
    d=(2*(a-1))+(2*(b-1));
    printf("%d\n%d\n",c,d);
    }
    return 0;
}
