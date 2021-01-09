#include<stdio.h>
int main()
{
    int a,b,c,i,j,k,n;
    scanf("%d",&n);
    int arr[n];
    int ar[n];
    int arrr[n];
    for(i=0;i<n;i++)
    {
      scanf("%d%d",&ar[i],&arr[i]);
      if(ar[i]>arr[i])
      {
      a=ar[i];
      ar[i]=arr[i];
      arr[i]=a;
      }
    }
    for(i=0;i<n;i++){
        arrr[i]=0;
        for(j=ar[i]+1;j<arr[i];j++){
            if(j%2!=0){
             arrr[i]=arrr[i]+j;
            }
         }
     }
    for(i=0;i<n;i++){
    printf("%d\n",arrr[i]);
    }
    return 0;
}
