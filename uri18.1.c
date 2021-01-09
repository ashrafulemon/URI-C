#include<stdio.h>
int main()
{
    int i,j,N;
    int ar[7]={100,50,20,10,5,2,1};
    int arr[7];
    scanf("%d",&N);
    printf("%d\n",N);

    for(i=0;i<7;i++)
    {
        arr[i]=N/ar[i];
        N=N%ar[i];
        printf("%d nota(s) de R$ %d\n",arr[i],ar[i]);
       // printf("%d hh %d\n",arr[i],ar[i]);
    }
   // for(j=0;j<7;j++)
    //{
      //  printf("%d nota(s) de R$ %d\n",arr[j],ar[j]);
   // }
    return 0;

}
