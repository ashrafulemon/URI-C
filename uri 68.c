#include<stdio.h>
int main()
{
    int X;
    int i;
    scanf("%d",&X);
if(X>0)
{
   for(i=X;i<=X+11;i++)
  {
        if(i%2!=0)
        {
        printf("%d\n",i);
       }
   }
}
  return 0;
}
