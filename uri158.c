#include<stdio.h>
int main()
{
    long long int a,b,c,d,i,j,k,t,x,y,z=0;
    scanf("%lld",&a);
    long long int ar[a];
    long long int arr[a];
    for(i=0;i<a;i++){
        scanf("%lld%lld",&ar[i],&arr[i]);
    }
    for(i=0;i<a;i++)
    {
        t=0;
        d=ar[i];
        x=arr[i];
        for(j=0;j<x;j++){
          for(k=d;k<100000000000;k++){
              if(k%2!=0){
                t=t+k;
                d=d+2;
                break;
              }
          }
       }
       printf("%lld\n",t);
    }
    return 0;
}
