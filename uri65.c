#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,j,l;
    int i,k=0;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
    int ar[5]={a,b,c,d,e};

   for(i=0;i<5;i++)
  {
        if(ar[i]%2==0)
        {
        k++;
       }
   }
  printf("%d valores pares\n",k);
  return 0;
}

