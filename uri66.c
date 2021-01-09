#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,j=0,l=0,m,n,x=0;
    int i=0,k=0;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
    int ar[5]={a,b,c,d,e};
    for(i=0;i<5;i++)
  {
        if(ar[i]%2==0)
        {
        k++;
       }
   }
        m=5-k;
     for(j=0;j<5;j++)
  {
        if(ar[j]>0)
        {
        l++;
       }
   }
    for(j=0;j<5;j++)
  {
        if(ar[j]<0)
        {
        x++;
       }
   }
  printf("%d valor(es) par(es)\n",k);
  printf("%d valor(es) impar(es)\n",m);
  printf("%d valor(es) positivo(s)\n",l);
  printf("%d valor(es) negativo(s)\n",x);
  return 0;
}


