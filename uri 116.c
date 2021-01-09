#include<stdio.h>
int main()
{
    int b,c,i,j,k,n;
    float a;
    scanf("%d",&n);
    int arr[n];
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&ar[i],&arr[i]);
    }
    for(j=0;j<n;j++)
    {
        if(arr[j]==0){
        printf("divisao impossivel\n");
        }
        else
        {
        a=ar[j]*1.00/arr[j];
        printf("%.1f\n",a);
        }
    }
}
