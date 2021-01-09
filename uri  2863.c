#include<stdio.h>
int main()
{
    int a,b,c,i,j;
    while(scanf("%d",&a)!=EOF){
          float ar[a];
          c=0;
          for(i=0;i<a;i++){
            scanf("%f",&ar[i]);
            if(ar[i]<ar[c] && i>0)
                ar[c]=ar[i];
          }
          printf("%.2f\n",ar[c]);
    }
    return 0;
}
