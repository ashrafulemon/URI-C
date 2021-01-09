#include<stdio.h>
int main()
{
    int i,j=0,k,l;
    long long int a,b,c,d,x,y,z;
    long long int arr[100];
    long long int ar[100];
    for(i=0;i<100;i++){
    scanf("%lld",&ar[i]);
    }
    d=ar[0];
    z=1;
   // for(j=0;j<99;j++){
     for(k=1;k<100;k++)
      {
        if(ar[j]<ar[k])
        {
         //   c=ar[j];
            ar[j]=ar[k];
          //  ar[k]=c;
            d=ar[j];
            z=k+1;
        }

      }
// }
    printf("%lld\n",d);
    printf("%lld\n",z);
    return 0;
}


