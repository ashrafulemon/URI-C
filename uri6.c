#include<stdio.h>
int main()
{
   float A,B,C,c,d,e,m;
   scanf("%f%f%f",&A,&B,&C);
   if(0<=A&&A<=10.0&&0<=B&&B<=10.0 && 0<=C&& C<=10.0)
   {
    c=A*2;
    d=B*3;
    e=C*5;
    m=(c+d+e)/(2+3+5);
    printf("MEDIA = %.1f\n",m);
   }
   else
   {
       printf("\n");
   }
   return 0;
}


