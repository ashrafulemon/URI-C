#include<stdio.h>
int main()
{
    long long int a,b=0,c=0,d=0,e=0,f=0,i,j,k;
    long long int ar[15];
    long long int arr[15];
    for(i=0;i<15;i++){
        scanf("%lld",&a);
        if(a%2!=0 || i==14){
            if(a%2!=0)
            {arr[c]=a;
            c=c+1;
            e=c;}
            if(c>=5 || i==14){
              for(j=0;j<e;j++){
                    c=0;
                printf("impar[%lld] = %lld\n",j,arr[j]);
              }
            }
        }
        if(a%2==0 ||i==14){
                if(a%2==0 )
            {ar[b]=a;
            b=b+1;
            f=b;}
            if(b>=5 || i==14){
              for(j=0;j<f;j++){
                    b=0;
                printf("par[%lld] = %lld\n",j,ar[j]);
               }
            }
        }

    }

    return 0;
}

