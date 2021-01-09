#include<stdio.h>
int main()
{
    int b,c,i,j,k;
    float a=1.00,x=0,y=0;
    float ar[1000];
    for(i=1;i<=39;i+=2)
    {
        ar[i]=x+((i*1.00)/a);
        //printf("%d/%.1f\n",i,a);
        a=a*2;
        x=ar[i];
    }
    printf("%.2f\n",x);
    return 0;
}
