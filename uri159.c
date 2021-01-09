#include<stdio.h>
int main()
{
    long long int a,b,c,d,i,j,k,l,t,v;
    long long  int ar[1000000];
    for(i=0;i<1000000;i++){
        scanf("%lld",&ar[i]);
        if(ar[i]==0){
            break;
        }
    }
    for(j=0;j<i;j++){
        t=0;
        v=ar[j];
        for(k=0;k<5;k++){
            for(l=v;l<1000000;l++){
                if(l%2==0){
                    t=t+l;
                    v=l+1;
                    break;
                }
            }
        }
        printf("%lld\n",t);
    }
    return 0;
}
