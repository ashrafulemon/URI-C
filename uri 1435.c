#include<stdio.h>
int main()
{
    int a,b,c,i,j,k,x,y,z,n;
    while(scanf("%d",&a)){
        n=a;
        if(a==0)
        break;
        b=a+1;
        int ar[b][b];

        if(a%2==0)
            b=a/2;
        if(a%2!=0)
            b=a/2 +1;
        x=1;y=1;z=1;
        for(k=1;k<=b;k++){
          for(i=x;i<=a;i++){
            for(j=y;j<=a;j++){
              ar[i][j]=z;
            }
           }
           x++; y++; z++; a--;
        }
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                if(j==1)
                printf("%3d",ar[i][j]);
                if(j!=1)
                printf(" %3d",ar[i][j]);
            }
            printf("\n");
        }
        printf("\n");

    }
    return 0;
}
