#include<stdio.h>
int main()
{
    long long int a,b=0,c,d,e,i,j,k,l;
    scanf("%lld",&a);
    long long int ar[a];
    for(i=0;i<a;i++){
        scanf("%lld",&ar[i]);
    }
    if(ar[0]>ar[a-1] && ar[0]>ar[1]){
        b=b+1;
    }
    if(ar[0]<ar[a-1] && ar[0]<ar[1]){
        b=b+1;
    }
    i=1;
    while(i<a)
    {
        while(i<a){
           if(ar[i-1]>ar[i]){
               i++;
               if(ar[i-1]<ar[i]){
                  i++;
                  b=b+1;
                  break;
               }
           }
           else if(ar[i-1]<ar[i]){
               i++;
               if(ar[i-1]>ar[i]){
                  i++;
                  b=b+1;
                  break;
               }
           }

        }
    }
    printf("%d",b);
    return 0;
}
