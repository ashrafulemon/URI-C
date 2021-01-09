#include<stdio.h>
#include<math.h>
int sp(int d)
{
   int e=0;
    while(d>0){
        d=d/10;
        e++;
    }
    return e;
}
int main()
{
    int a,b,c,i,j,k,x,y,z,n,d,e,f,g,h,l;
    while(scanf("%d",&a)){
        n=a;
        if(a==0)
        break;
        b=a+1;
        int ar[b][b];
        z=1;
        for(i=1;i<=a;i++){
            for(j=1;j<=a;j++){
              ar[i][j]=z;
              z=z*2;
            }
            z=ar[i][2];
        }
        f=sp(ar[a][a]);
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                g=sp(ar[i][j]);
                l=f-g;
                for(h=1;h<=l;h++)
                    printf(" ");

                if(j==1)
                  printf("%d",ar[i][j]);
                if(j!=1)
                  printf(" %d",ar[i][j]);

            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}


