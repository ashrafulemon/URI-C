#include<stdio.h>

int main()
{
    long long int a,b=0,c=0,i=0,j,k,d;
    scanf("%lld",&a);
    long long int ar[a];
    long long int arr[a];
    for(i=0;i<a;i++){
        scanf("%lld",&ar[i]);
        arr[i]=0;
    }
    i=0;
    while(1){
        if(i==0 && ar[i]%2==0){
            arr[i]=1;
            if(ar[i]>0)
                ar[i]=ar[i]-1;
            break;
        }
        else if(i==a-1 && ar[i]%2!=0){
            arr[i]=1;
            ar[i]=ar[i]-1;
            break;
        }
        else if(ar[i]%2!=0){
            arr[i]=1;
            ar[i]=ar[i]-1;
            i++;
        }
        else if(ar[i]%2==0){
            arr[i]=1;
            if(ar[i]>0)
            ar[i]=ar[i]-1;
            i--;
        }
    }
    for(i=0;i<a;i++){
        b=ar[i]+b;
        c=arr[i]+c;
    }
    printf("%lld %lld\n",c,b);
    return 0;
}
