#include<stdio.h>
int main()
{
    long long int a,b,i,j;
    scanf("%lld",&a);
    long long int ar[a];
    if(a<10000)
 {
    for(i=0;i<a;i++){
    scanf("%lld",&ar[i]);
    }

    for(j=0; j<a ;j++)
      {
        if(ar[j]==0)
        {
            printf("NULL\n");
        }
        else if(ar[j]%2==0)
        {
            if(ar[j]>0){
            printf("EVEN POSITIVE\n");
            }
            else if(ar[j]<0){
            printf("EVEN NEGATIVE\n");
            }
        }
        else if(ar[j]%2!=0)
        {
            if(ar[j]>0){
            printf("ODD POSITIVE\n");
            }
            else if(ar[j]<0){
            printf("ODD NEGATIVE\n");
            }
        }
      }
 }
    return 0;
}

