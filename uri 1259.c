#include<stdio.h>
int main()
{
    int a,b,c,i,j=0,k=0,l,m;
    scanf("%d",&a);
    int ar[100000];
    int br[100000];
    for(i=0;i<a;i++){
        scanf("%d",&b);
        if((b%2)==0){
            ar[j]=b;
            j++;
        }
        else{
            br[k]=b;
            k++;
        }
    }
    for(i=0;i<j;i++){
        for(l=i;l<j;l++){
            if(ar[i]>ar[l]){
                c=ar[i];
                ar[i]=ar[l];
                ar[l]=c;
            }
        }
        printf("%d\n",ar[i]);
    }
    for(i=0;i<k;i++){
        for(l=i;l<k;l++){
            if(br[i]<br[l]){
                c=br[i];
                br[i]=br[l];
                br[l]=c;
            }
        }
        printf("%d\n",br[i]);
    }
    return 0;
}
