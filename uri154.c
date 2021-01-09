#include<stdio.h>
int main()
{
    int a=0,b=0,c,i,j,k;
    float x,y;
    int ar[10000];
    int arr[10000];
    for(i=0;i<10000;i++){
        scanf("%d",&ar[i]);
        if(ar[i]<0){
        break;
        }
    }
    for(j=0;j<i;j++){
        a=a+ar[j];
    }
    x=a*1.00/i;
    printf("%.2f\n",x);
    return 0;
}
