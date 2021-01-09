#include<stdio.h>
int main()
{
   float A,B,c,d,m;
   scanf("%f%f",&A,&B);
   if(0<=A&&A<=10&&0<=B&&B<=10)
   {
    c=A*3.5;
    d=B*7.5;
    m=(c+d)/(3.5+7.5);
    printf("MEDIA = %.5f\n",m);
   }
   else
   {
       printf("\n");
   }
   return 0;
}
