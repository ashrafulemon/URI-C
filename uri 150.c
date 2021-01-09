#include<stdio.h>
int main()
{
    int a,b,c,i,j,k=0,l=0;;
    scanf("%d",&a);
    for (i=0;i<10000;i++)
    {
        scanf("%d",&b);
        if(b>a)
        {
            break;
        }
    }
    for(j=a;j<10000;j++)
    {
        k=k+j;
        l=l+1;
        if(k>b)
        {
            printf("%d\n",l);
            break;
        }

    }
    return 0;
}
