
#include<stdio.h>
int main()
{
    int a,b,c,i,j,k,l=0;
    int ar[100];
    scanf("%d%d",&a,&b);
    c=b-a;
    for(i=0;i<30;i++){
        scanf("%d",&ar[i]);
    }
    for(i=0;i<30;i++){
        for(j=i;j<30;j++){
            if(ar[i]>ar[j]){
                k=ar[i];
                ar[i]=ar[j];
                ar[j]=k;
            }
        }
    }
    for(i=29;i>=0;i--){
        if(c<=0 && i==29){
            printf("0\n");
            break;
        }
        l=l+1;
        c=c-ar[i];
        if(c<=0){
            printf("%d\n",l);
            break;
        }
    }
    return 0;
}
