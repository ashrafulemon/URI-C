#include<stdio.h>
#include<math.h>
int main()
{
   int a,b,c,d,MaiorAB;
   scanf("%d%d%d",&a,&b,&c);
   d=(a+b+abs(a-b))/(2.0);
   MaiorAB=(d+c+abs(d-c))/(2.0);
   printf("%d eh o maior\n",MaiorAB);
   return 0;
}
