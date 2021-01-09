#include<stdio.h>
int main()
{
    float a,b,c,i,j;
       for(i=0;i<1;i++)
    {
        for(j=1;j<=3;j++){
        printf("I=%.f J=%.f\n",i,j);
        }
    }
    for(i=0.2;i<2;)
    {
        for(j=1.2;j<=4;j++){
        printf("I=%.1f J=%.1f\n",i,j);
        }
        i=i+.2;
    }
        for(i=2;i<3;i++)
    {
        for(j=2;j<=5;j++){
        printf("I=%.f J=%.f\n",i,j);
        }
    }
    return 0;
}
