#include<stdio.h>
int main()
{
    float a,b,c,d;
    float ar[1000];
    float arr[1000];
    int i,j,k,l;
    for (i=0;i<10000;i++){
        scanf("%f",&ar[i]);
        if(ar[i]>=0 && ar[i]<=10){
        a=ar[i];
        break;
        }
    }
    for (j=0;j<10000;j++){
        scanf("%f",&arr[j]);
        if(arr[j]>=0 && arr[j]<=10){
        b=arr[j];
        break;
        }
    }
    for(k=0;k<i;k++){
        printf("nota invalida\n");
    }
    for(l=0;l<j;l++){
        printf("nota invalida\n");
    }

    c=(a+b)*1.00/2;
    printf("media = %.2f",c);
    return 0;
}
