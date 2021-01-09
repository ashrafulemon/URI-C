#include<stdio.h>
int main()
{
    int i,j,k=7;
    for(i=1;i<=9;)
    {
        for(j=k;j>4;j--)
        {
            printf("I=%d J=%d\n",i,j);
        }
        i=i+2;
    }
    return 0;
}
