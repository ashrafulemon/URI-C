#include<stdio.h>
int main()
{
    long long int a,b,c,i,j,k=0;
    long long int ar[11];
    scanf("%lld",&a);
    for(i=1;i<11;i++){
        ar[i]=a%10;
        a=a/10;
        if(a==0){
            break;
        }
    }
    for(j=1;j<=i;j++){
        printf("%lld",ar[j]);
        if(j==i){
            printf("\n");
            break;
        }

    }
    return 0;
}
