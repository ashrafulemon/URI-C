#include<stdio.h>
int main()
{
    int i,j;
    float a=1,b=0,c,d,e,f,s;
    float ar[101];
    for(i=1;i<=100;i++)
    {
        ar[i]=(a/i)*1.00;
        b=ar[i]+b;
        s=b;
    }

    printf("%.2f\n",s);
    return 0;
}
