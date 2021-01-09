#include<stdio.h>
int main()
{
    int a,b,c,i,j,k,z;
    while(scanf("%d%d",&a,&b)!=EOF){
        int ar[b];
        for(i=0;i<b;i++){
            scanf("%d",&ar[i]);
        }
        z=0;
        for(i=1;i<=a;i++){
            k=0;
            for(j=0;j<b;j++){
                if(ar[j]==i){
                    k=1;
                    break;
                }
            }
          //  if(z==1 && k==0)
          //      printf(" ");
            if(k==0){
                printf("%d ",i);
                z=1;
            }

        }
        if(z==0)
            printf("*");
        printf("\n");
    }
    return 0;
}
