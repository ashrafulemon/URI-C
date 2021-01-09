#include<stdio.h>
int main()
{
    long long int a,b=0,c,d,e,f,i,j,k;
    long long int ar[15];
    long long int arr[15];
    for(i=0;i<15;i++){
        scanf("%lld",&ar[i]);
    }
    for(i=0;i<15;i++){
        if(ar[i]%2==0){
            printf("par[%lld] = %lld\n",b,ar[i]);
            b=b+1;
            c=i;
        }
         if(b>4){
                break;
            }
    }
    b=0;
    for(i=0;i<15;i++){
        if(ar[i]%2!=0){
            printf("impar[%lld] = %lld\n",b,ar[i]);
            b=b+1;
            d=i;
        }
         if(b>4){
                b=0;
                break;
            }
    }
    b=0;
    for(i=d+1;i<15;i++){
        if(ar[i]%2!=0){
            printf("impar[%lld] = %lld\n",b,ar[i]);
            b=b+1;
            e=i;
        }
         if(b>4){
                break;
            }
    }
    b=0;
    for(i=c+1;i<15;i++){
        if(ar[i]%2==0){
            printf("par[%lld] = %lld\n",b,ar[i]);
            b=b+1;
            f=i;
        }
          if(b>4){

                break;
            }
    }
    b=0;
     for(i=f+1;i<15;i++){
        if(ar[i]%2==0){
            printf("par[%lld] = %lld\n",b,ar[i]);
            b=b+1;
        }
          if(b>4){
                break;
            }
    }
    b=0;
     for(i=e+1;i<15;i++){
        if(ar[i]%2!=0){
            printf("impar[%lld] = %lld\n",b,ar[i]);
            b=b+1;
        }
         if(b>4){
                break;
            }
    }
    return 0;
}
