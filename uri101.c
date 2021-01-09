#include<stdio.h>
int main()
{
    int a,b=0,c,i,j,k;
    int ar[1000];
    int arr[1000];
    for(i=0;i<1000;i++)
    {
            scanf("%d%d",&ar[i],&arr[i]);
            if(ar[i]>arr[i])
            {
                a=ar[i];
                ar[i]=arr[i];
                arr[i]=a;
            }
            if(ar[i]==0 || ar[i]<0)
            {
                break;
            }
    }
    for (j=0;j<i;j++)
    {
        b=0;
        for(k=ar[j];k<=arr[j];k++)
        {
          printf("%d ",k);
          b=b+k;
        }
        printf("Sum=%d\n",b);
    }
    return 0;
}
