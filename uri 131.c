#include<stdio.h>
int main()
{
    int a=0,b=0,c=0,d=0,i,j,k,m,n;
    int ar[100];
    int arr[100];
    int br[100];
   // while (1)
   for(m=0;m<1000;m++)
    {
    for(i=0;i<1;i++){
        scanf("%d%d",&ar[m],&arr[m]);
        a=a+1;
        printf("Novo grenal (1-sim 2-nao)\n");
        for(j=0;j<1000;j++){
            scanf("%d",&br[j]);
            if(br[j]==1 || br[j]==2 ){
                break;
                }
        }
    if(br[j]==2){
        break;
        }
    }
    if(br[j]==2){
        break;
    }
    }
    for(k=0;k<=m;k++)
    {
        if(ar[k]>arr[k]){
            b=b+1;
        }
        else if(ar[k]<arr[k]){
            c=c+1;
        }
        else if(ar[k]==arr[k]){
            d=d+1;
        }
    }
    printf("%d grenais\n",a);
    printf("Inter:%d\n",b);
    printf("Gremio:%d\n",c);
    printf("Empates:%d\n",d);
    if(b>c)
    {
        printf("Inter venceu mais\n");
    }
    else if(c>b)
    {
        printf("Gremio venceu mais\n");
    }
    else if(c==b)
    {
         printf("Não houve vencedor\n");
    }

    return 0;
}
