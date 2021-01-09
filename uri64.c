#include<stdio.h>
int main()
{
    float a,b,c,d,e,f,j=0,l;
    int i,k=0;
    scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
    float ar[6]={a,b,c,d,e,f};
   for(i=0;i<6;i++)
  {
        if(ar[i]>0)
        {
          k++;
          j=j+ar[i];
       }
   }
   l=j/k;
  printf("%d valores positivos\n%.1f\n",k,l);
  return 0;
}

