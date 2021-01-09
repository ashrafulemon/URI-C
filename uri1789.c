#include<stdio.h>
int main()
{
    int a,b,c,d,i,j,k,n;

    while(scanf("%d",&n)!=EOF){
       b=0;
       c=0;
       d=0;
       for(i=0;i<n;i++){
          scanf("%d",&a);
          if(a<10){
            b=1;
          }
          if(a>=10){
            c=1;
          }
          if(a>=20){
            d=1;
          }
       }
       if(d==1){
           printf("3\n");
       }
       else if(c==1){
           printf("2\n");
       }
       else if(b==1){
           printf("1\n");
       }

    }
    return 0;
}
