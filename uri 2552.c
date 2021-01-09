#include<stdio.h>
int main()
{
    int a,b,c,i,j,k;
    while(scanf("%d%d",&a,&b)!=EOF){
        int ar[a][b];
        for(i=0;i<a;i++){
            for(j=0;j<b;j++){
                scanf("%d",&ar[i][j]);
            }
        }
        for(i=0;i<a;i++){
            for(j=0;j<b;j++){
                k=0;
                if(ar[i][j]==1)
                    printf("9");
                else{
                    if(ar[i+1][j]==1 && (i+1)<a )
                        k+=1;
                    if(ar[i-1][j]==1 && (i-1)>=0)
                        k+=1;
                    if(ar[i][j+1]==1 && (j+1)<b)
                        k+=1;
                    if(ar[i][j-1]==1 && (j-1>=0))
                        k+=1;
                    printf("%d",k);
                }
            }
            printf("\n");
        }
    }
    return 0;
}
