
#include<stdio.h>
int main()
{
    long long int a,b,c,i,j,k=1,n;
    while (scanf("%lld",&n)!=EOF){
       long long int ar[50000];
       ar[0]=0;
       b=1;
       for(i=1;i<=n;i++){
         for(j=1;j<=i;j++){
          ar[b]=i;
          b++;
         }
       }
    if(b==1){
       printf("Caso %lld: %lld numero\n",k,b);
      // printf("%d\n",ar[0]);
    }
    else
       printf("Caso %lld: %lld numeros\n",k,b);

    for(i=0;i<b;i++){
       printf("%lld",ar[i]);
       if(i==b-1){
         printf("\n");
         break;
       }
       printf(" ");
    }
    k++;
    printf("\n");
   }
    return 0;
}
