#include<stdio.h>
int main()
{
    int a,b,c,i,j,k=0;
    scanf("%d",&a);
    int ar[a];
    double arr[a];
    for(i=0;i<a;i++){
        scanf("%d %lf",&ar[i],&arr[i]);
    }
    for(j=1;j<a;j++){
        if(arr[k]<arr[j]){
            k=j;
        }
    }
    if(arr[k]>=8){
        printf("%d\n",ar[k]);
    }
    else
        printf("Minimum note not reached\n");

    return 0;
}
