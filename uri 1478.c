#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,i,j,k,x,y,z,n;
    while(scanf("%d",&a)){
        n=a;
        if(a==0)
        break;
        b=a+1;
        int ar[b][b];

        for(i=1;i<=a;i++){
            for(j=1;j<=a;j++){
              z=abs(i-j);
              z=z+1;
              ar[i][j]=z;
            }
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

