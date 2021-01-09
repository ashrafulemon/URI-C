#include<stdio.h>

int abc(int b,int c)
{
    int ar[b+1];
    int i,j,k,e=0,f=0,g;
    for(j=1;j<=b;j++)
        ar[j]=j;
    k=1;
    j=0;
    i=1;
    while(1){
        while(1){
            if(ar[k]>0){
                j=j+1;
             //   printf("aaaa%d\n",ar[k]);
                if(j==c){
                    j=0;
                    e=e+1;
                    g=ar[k];
              //      printf("%d\n",g);
                    ar[k]=0;
                    if(k==b){
                       k=1;
                       break;
                    }
                    k++;
                    break;
                }
            }
            if(k==b){
                k=1;
                break;
            }
            k++;
        }
        if(e==b)
            break;
    i++;
    }
    return g;
}
int main()
{
    int a,b,c,d,i,j,k;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        scanf("%d%d",&b,&c);
        d=abc(b,c);
        printf("Case %d: %d\n",i+1,d);
    }
    return 0;
}
