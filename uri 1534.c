#include<stdio.h>
int main()
{
    int a,b,c,d,i,j,k;
    while(scanf("%d",&a)!=EOF){
            b=a+1;
        int ar[b][b];
        for(i=1;i<=a;i++){
            for(j=1;j<=a;j++){
                if(i==j){
                  ar[i][j]=1;
                }
                else
                  ar[i][j]=3;
            }
        }
        for(i=1,j=a; i<=a,j>=1; i++,j--){
          ar[i][j]=2;
        }
        for(i=1;i<=a;i++){
            for(j=1;j<=a;j++){
                printf("%d",ar[i][j]);
            }
            printf("\n");
        }

    }
    return 0;
}
