#include<stdio.h>
int main()
{
    int a,b,c,i;
    scanf("%d",&a);
    if(a>=0 && a<=10000){
        b= (a+1)*(a+2) /2;
        printf("%d\n",b);
    }
    return 0;
}
