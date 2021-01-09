#include<stdio.h>
int main()
{
    int a,b,c,i,k;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d",&b);
        c=b%2;
        printf("%d\n",c);
    }
    return 0;
}
