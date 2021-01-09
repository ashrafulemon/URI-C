
#include<stdio.h>
int main()
{
    long long int  a,b,c=0,i,j,k;
    while (scanf("%lld",&a)!=EOF){
      c=0;
      if(a%4==0){
          c=1;
          if(a%400==0){
          c=1;
          printf("This is leap year.\n");
          }
          else if(a%100==0 && a%400!=0){
              c=0;
          }
          else
           printf("This is leap year.\n");
      }
      if(a%15==0){
          c=1;
          printf("This is huluculu festival year.\n");
      }
      if(a%55==0){
          c=1;
          printf("This is bulukulu festival year.\n");
      }
      if(c==0){
          printf("This is an ordinary year.\n");
      }
    printf("\n");
    }
    return 0;
}

