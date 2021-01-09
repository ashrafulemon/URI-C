#include<stdio.h>
int main()
{
    long long int a,b,c=0,i,j,k,d,e,f,g;
    scanf("%lld",&a);
    for(i=1;i<=a;i++){
        e=i;
        for(j=1;j<=14;j++){
            k=e%10;
            e=e/10;
            if(k==1){
              c=c+1;
            }
            if(k==7){
              c=c+1;
            }
            if(e==0){
                break;
            }
        }
    }
   /* for(i=1;i<=a;i++){
        e=i;
        for(j=1;j<=50;j++){
            k=e%10;
            e=e/10;
            if(k==7){
              c=c+1;
            }
            if(e==0){
                break;
            }
        }
    }*/
    printf("%lld\n",c);
    return 0;
}
