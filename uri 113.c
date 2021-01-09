#include<stdio.h>
int main()
{
    int a,b,c,i,j,k;
    int arr[1000];
    int ar[1000];
    for (i=0;i<1000;i++)
    {
        scanf("%d%d",&ar[i],&arr[i]);
        if(ar[i]==arr[i]){
        break;
        }
    }
    for (j=0;j<i;j++)
    {
        if(ar[j]<arr[j]){
        printf("Crescente\n");
        }
        else if(ar[j]>arr[j]){
        printf("Decrescente\n");
        }
    }
    return 0;
}
