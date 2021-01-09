#include<stdio.h>
int main()
{
    int a,b,c,i,j=0,k=0,l,m;
    scanf("%d",&a);
    int ar[a+5];
    int br[a+5];
    for(i=0;i<a;i++){
        scanf("%d",&ar[i]);
    }
    for(i=0;i<a;i++){
        for(l=i;l<a;l++){
            if(ar[i]>ar[l]){
                c=ar[i];
                ar[i]=ar[l];
                ar[l]=c;
            }
        }
    }
    for(i=0;i<a;i++){
        if(ar[i]%2==0)
            printf("%d\n",ar[i]);
    }
    for(i=a-1;i>=0;i--){
        if(ar[i]%2!=0)
            printf("%d\n",ar[i]);
    }

    return 0;
}
