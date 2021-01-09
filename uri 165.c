#include<stdio.h>
int main()
{
    int n,i,j,k,y;
    long long int a,b,c;
    long long int ar[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%lld",&ar[i]);
    }
    for(i=0;i<n;i++){
        y=0;
        for(j=2;j<ar[i];j++){
            if(ar[i]%j==0){
                y=y+j;
                printf("%lld nao eh primo\n",ar[i]);
                break;
            }
        }
        if(y<=0){
            printf("%lld eh primo\n",ar[i]);
        }
    }
    return 0;
}
