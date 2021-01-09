#include<stdio.h>
int main()
{
    long long int a,b=1,c,d=1,i,j,ar[100];
    scanf("%lld",&a);
    for(i=1;i<=a;i++){
        ar[i]=b;
        c=b;
        b=d;
        d=b+c;
    }
    for(j=a;j>0;j--){
        printf("%lld",ar[j]);
        if(j==1)
        printf("\n");
        else
        printf(" ");
    }
    return 0;

}
