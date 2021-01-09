#include<stdio.h>
int main()
{
    while(1){
    float a,b,c,d=0,e,q,r,s,t,u;
    float ar[1000];
    float arr[1000];
    float arrr[10000];
    float br[1000];
    float brr[1000];
    int i,j,k,l,m=0,n,o,p,f,g,h;
    arrr[m]=0;

    for (i=0;i<10000;i++){
        scanf("%f",&ar[i]);
        if(ar[i]>=0 && ar[i]<=10){
        a=ar[i];
        break;
        }
        printf("nota invalida\n");
    }
    for (j=0;j<10000;j++){
        scanf("%f",&arr[j]);
        if(arr[j]>=0 && arr[j]<=10){
        b=arr[j];
        break;
        }
        printf("nota invalida\n");
    }
    c=(a+b)*1.00/2;
    printf("media = %.2f\n",c);
    for(m=0;m<1000;m++){
        scanf("%f",&arrr[m]);
        if(arrr[m]==1 || arrr[m]==2)
        {
        printf("novo calculo (1-sim 2-nao)\n");
        break;
        }
        printf("novo calculo (1-sim 2-nao)\n");
    }
    if(arrr[m]==2)
    {
       // printf("novo calculo (1-sim 2-nao)\n");
        break;
    }
}
    return 0;
}

