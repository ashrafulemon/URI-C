#include<stdio.h>
int main()
{
    int a,b,c,i,j,k,d,e,f;
    while(scanf("%d",&a)!=EOF){
        int ar[a][a];
        for(i=0;i<a;i++){
            for(j=0;j<a;j++){
                ar[i][j]=0;
                if(i==j)
                ar[i][j]=2;
            }
        }
        b=a-1;
        for(i=0,j=b; i<a,j>=0;i++,j--)
            ar[i][j]=3;
        c=a/3;
        e=a-c;
        for(i=c;i<e;i++){
            for(j=c;j<e;j++)
                ar[i][j]=1;
        }
        d=a/2;
        ar[d][d]=4;
        for(i=0;i<a;i++){
          for(j=0;j<a;j++){
                printf("%d",ar[i][j]);
            }
            printf("\n");
         }
         printf("\n");
    }
    return 0;
}
