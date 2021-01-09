#include<stdio.h>
int main()
{
    int a,b=0,c,d,i,j,k;
    scanf("%d",&a);
    int ar[100][100];
    int br[100];
    for(i=1;i<=a;i++){
        for(j=1;j<=a;j++)
        scanf("%d",&ar[i][j]);
    }
    for(k=a;k>0;k--){
            b=0;
        for(i=1;i<=k;i++){
            b=b+ar[k][i];
        }
        printf("%d ",b);
    }

}
