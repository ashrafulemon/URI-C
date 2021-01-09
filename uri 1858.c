#include<stdio.h>
int main()
{
    int a,b,c,n,i,j,k;
    int ar[1000];
    scanf("%d",&a);
    for (i=1;i<=a;i++)
    {
        scanf("%d",&ar[i]);
    }
    c=1;
    for(j=2;j<=a;j++)
    {
        if(ar[1]>ar[j])
        {
            ar[1]=ar[j];
            c=j;
        }

    }
    printf("%d\n",c);

    return 0;
}
