#include<stdio.h>
int main()
{
    int a,b,c,i,j,k;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a>=0 && a<=100 && b>=0 && b<=100){
    c=b*2;
    i=c-a;
    printf("%d\n",i);
    }
    return 0;
}
