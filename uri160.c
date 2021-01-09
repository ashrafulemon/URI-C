#include<stdio.h>
int main()
{
    int a,b,c,d,i,j,k;
    float e,f,g,h;
    scanf("%d",&a);
    int ar[a];
    float br[a];
    int arr[a];
    float brr[a];
    for(i=0;i<a;i++){
    scanf("%d%d%f%f",&ar[i],&arr[i],&br[i],&brr[i]);
    }
    for(i=0;i<a;i++){
        c=0;
        for(j=0;j<10000;j++){
            ar[i]=ar[i]+((ar[i]*br[i])/100);
            arr[i]=arr[i]+((arr[i]*brr[i])/100);
            c=c+1;
            if(c>100){
                printf("Mais de 1 seculo.\n");
                break;
            }
            if(ar[i]>arr[i]){
                printf("%d anos.\n",c);
                break;
            }
        }
    }
    return 0;
}
