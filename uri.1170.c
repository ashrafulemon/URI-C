#include<stdio.h>
int main()
{
    int a,b=0,c,i,j;
    float ar[10000];
    float arr[10000];
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        b=0;
        scanf("%f",&ar[i]);
        while (ar[i]>1)
        {
            ar[i]=ar[i]/2;
            b=b+1;
        }
        printf("%d dias\n",b);
    }
    return 0;
}
