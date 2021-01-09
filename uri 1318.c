#include<stdio.h>
int main()
{
    int a,b,c,i,j,k,m;
    while(scanf("%d%d",&a,&b)){
        if(a==0 && b==0)
            break;
        int ar[b];
        k=0;
        m=0;
        for(i=0;i<b;i++){
            scanf("%d",&ar[i]);
        }
        for(i=0;i<b;i++){
                m=0;
            for(j=i+1;j<b;j++){
                if(ar[i]==ar[j] && ar[j]!=0 && ar[i]!=0){
                    m=1;
                   // printf("%d\n",ar[i]);
                    ar[j]=0;
                    //break;
                }
            }
            if(m==1)
                k=k+1;
        }
        printf("%d\n",k);
    }
    return 0;
}
