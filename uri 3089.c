#include<stdio.h>
int main()
{
   long long int a,b,c,i,j,k,d=0,e=0;
    long long int ar[100000];
    long long int br[100000];
   while( scanf("%lld",&a)!=EOF){
    if(a==0)
       break;
    b=a*2;
    for(i=1;i<=b;i++){
        scanf("%lld",&ar[i]);
    }
    for(i=1,j=b;i<=a,j>a;i++,j--){
        br[i]=ar[i]+ar[j];
    }
    e=d=br[1];
    for(k=2;k<=a;k++){
        if(d<br[k])
           d=br[k];
        if(e>br[k])
           e=br[k];
    }
    printf("%lld %lld\n",d,e);
   }
   return 0;
}
