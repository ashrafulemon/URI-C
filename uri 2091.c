#include<stdio.h>
int main()
{
    long long int a,b,c,i,j,k;
    while(scanf("%lld",&a)!=EOF){
        k=0;
        if(a==0)
            break;
        long long int ar[a+5];
        for(i=0;i<a;i++){
            scanf("%lld",&ar[i]);
        }
        for(i=0;i<a;i++){
            for(j=i;j<a;j++){
                if(ar[i]>ar[j]){
                    k=ar[i];
                    ar[i]=ar[j];
                    ar[j]=k;
                }
            }
            if(i%2==1){
                if(ar[i]!=ar[i-1]){
                    printf("%lld\n",ar[i-1]);
                    break;
                    }
            }
            else if(i==a-1){
                printf("%lld\n",ar[i]);
            }
        }
    }
    return 0;
}
