#include<stdio.h>
int main()
{
    int a,b=1,c=1,i=60,j;
    for(i=60;i>=0;)
    {
        b=c ;
        printf("I=%d J=%d\n",b,i);
        i=i-5;
        c=b+3;
    }
    return 0;
}
