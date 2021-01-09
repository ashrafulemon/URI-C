#include<stdio.h>
int main()
{
    int a,b,c,d,i=0,j,k;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>=1 && a<=100 && b>=1 && b<=100 && c>=1 && c<=100 && d>=1 && d<=100)
    {

      if(a+b>c && a+c>b && b+c>a ){
          i=1;
      }
      if(a+b>d && a+d>b && b+d>a ){
          i=1;
      }
      if(a+d>c && a+c>d && d+c>a ){
          i=1;
      }
      if(d+b>c && d+c>b && b+c>d ){
          i=1;
      }
    }
    if(i==1){
        printf("S\n");
    }
    else
        printf("N\n");
    return 0;
}
