#include<stdio.h>
int main()
{
    long long int a,b,c,d,m=0,i,j,k,ar[1000],br[1000],cr[1000];
    scanf("%lld",&a);
    ar[0]=0;
    ar[1]=1;
    for(i=1;i<=a;i++){
        c=0;
        m=0;
        for(j=i;j>=1;j--){
           ar[j]=ar[j-1]+ar[j];
           printf("%d ",ar[j]);
           //first 5 number addition
           if(m<5){
              c=c+ar[j];
              m=m+1;
           }
        }
        ar[i+1]=0;
        printf("\n");
    }
    printf("%lld\n",c);
    return 0;
}
