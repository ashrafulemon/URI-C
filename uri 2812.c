#include<stdio.h>
int main()
{
    int a,b,c,i,j,k,m=0,n,l,p;
    scanf("%d",&a);
    for(p=1;p<=a;p++){
        scanf("%d",&b);
        int arr[100000];
        int ar[100000];
        m=0;
        l=1;
        n=0;

        for(j=1;j<=b;j++){
           scanf("%d",&arr[j]);
           if(arr[j]%2!=0){
            m=m+1;
            ar[m]=arr[j];
           }
        }

        for(i=1;i<m;i++){
            for(j=i+1;j<=m;j++){
                if(ar[i]>ar[j]){
                    k=ar[i];
                    ar[i]=ar[j];
                    ar[j]=k;
                }
            }
        }

        if(m%2==0)
            n=m/2;
        if(m%2!=0)
            n=m/2+1;
        if(n!=0){
        for(i=m; i>=n; i--){
            printf("%d",ar[i],a);
            for(j=l;j<n;j++){
                printf(" %d",ar[j]);
                l=l+1;
                break;
            }
            if(i==n){
                printf("\n");
                break;
            }
            printf(" ");
        }
       }
       else
        printf("\n");
    }
    return 0;
}
