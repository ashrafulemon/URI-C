#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,i,j,k;
    while(scanf("%d%d",&a,&b)!=EOF){
        int ar[a][b];
        int d=0,e=0,f=0,g=0,x,y,z;
        for(i=0;i<a;i++){
           for(j=0;j<b;j++){
            scanf("%d",&ar[i][j]);
            if(ar[i][j]==1){
              e=i+1;
              f=j+1;
            }
            if(ar[i][j]==2){
               g=i+1;
               d=j+1;
            }
           }
        }
        x=abs(e-g);
        y=abs(f-d);
        z=x+y;
        printf("%d\n",z);
    }
    return 0;
}
