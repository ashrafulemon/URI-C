#include<stdio.h>
int main()
{
   long long int b,c,i,j,k,a1=0,b1,c1;
   int a;
   scanf("%d",&a);
   for(i=0;i<a;i++){
       a1=0;
       scanf("%lld%lld",&b,&c);
       if(b>=c && c!=0)
       {
       for(j=0;j<100;j++){
           b1=b%10;
           b=b/10;
           c1=c%10;
           c=c/10;
           if(c==0){
               a1=1;
               break;
           }
           if(b1!=c1){
              a1=0;
              break;
           }
       }
       }
       if(a1==0){
           printf("nao encaixa\n");
       }
       else
            printf("encaixa\n");
   }
   return 0;
}
