#include<stdio.h>
int main()
{
    long long int a,b=0,c=0,d,e,i,j,k,l;
    while(scanf("%lld",&a)){
    b=0;c=a+2;
    if(a==0)
        return 0;
    long long int ar[c];
    for(i=0;i<a;i++){
        scanf("%lld",&ar[i]);
    }
    ar[a]=ar[0];
    ar[a+1]=ar[1];
    i=1;
    while(i<c)
    {
        while(i<c){
           if(ar[i-1]>ar[i]){
               i++;
               if(ar[i-1]<ar[i] && i<c){
               //   printf("pri %lld %lld\n",ar[i-1],ar[i]);
                  b=b+1;
                  break;
               }
           }
           else if(ar[i-1]<ar[i]){
               i++;
               if(ar[i-1]>ar[i] && i<c){
                 // printf("pri  %lld %lld\n",ar[i-1],ar[i]);
                  b=b+1;
                  break;
               }
           }
           else
            i++;
        }
       if(i==c)
            break;
    }
    printf("%lld\n",b);
  }
    return 0;
}

