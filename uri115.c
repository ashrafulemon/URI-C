#include<stdio.h>
int main()
{
    int a,b,c,i,j,k;
    int ar[1000];
    int arr[100];
    for (i=0;i<1000;i++)
    {
        scanf("%d%d",&ar[i],&arr[i]);
        if(ar[i]==0 || arr[i]== 0)
        {
            break;
        }
        else if(ar[i]>0 && arr[i]> 0)
        {
            printf("primeiro\n");
        }
        else if(ar[i]>0 && arr[i]< 0)
        {
            printf("quarto\n");
        }
        else if(ar[i]<0 && arr[i]> 0)
        {
            printf("segundo\n");
        }
        else if(ar[i]<0 && arr[i]< 0)
        {
            printf("terceiro\n");
        }
    }
    return 0;
}
