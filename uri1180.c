#include<stdio.h>
int main()
{
    long long int a,b,c,d,i,j,k,x=0;
    scanf("%lld",&a);
    long long int ar[a];
    for(i=0;i<a;i++)
    {
        scanf("%lld",&ar[i]);
    }
    for(i=0;i<1;i++)
    {
         b=ar[i];
         for(j=1;j<a;j++)
         {
             if(b>ar[j]){
              b=ar[j];
             }
         }
    }
     for(i=0;i<a;i++)
    {
        if(b==ar[i]){
            x=i;
        }
    }
    printf("Menor valor: %lld\n",b);
    printf("Posicao: %lld\n",x);
    return 0;
}
