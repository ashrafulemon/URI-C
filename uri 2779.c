#include<stdio.h>
int main()
{
    int a,b,c, d=0,e ,i,j,k;
    scanf("%d\n%d",&a,&b);
    int ar[b];
    for(i=0;i<b;i++){
        scanf("%d",&ar[i]);
    }
    for(i=0;i<b-1;i++){
        for(j=i+1;j<b;j++){
            if(ar[i]==ar[j] && ar[j]>0){
               ar[j]=0;
               d=d+1;
            }
        }
    }
    e=b-d;
    c=a-e;
    printf("%d\n",c);
    return 0;
}

