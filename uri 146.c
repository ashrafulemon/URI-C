#include<stdio.h>
int main()
{
    int a,b,c,i,j,k=0;
    int ar[10000];
    for (i=0;i<100000;i++){
        scanf("%d",&ar[i]);
        if(ar[i]==0){
        break;
        }
    }
    for(k=0;k<i;k++){
      for(j=1;j<=ar[k];j++){
        printf("%d",j);
        if(j!=ar[k]){
          printf(" ");
        }
      }
        printf("\n");
    }
    return 0;
}
