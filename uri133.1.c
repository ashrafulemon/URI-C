#include<stdio.h>
int main()
{
    int a,b,c=0,i,j,k,d,x;
    scanf("%d %d",&a,&b);
    if(a>0 && b>0)
    {
        if(a>b){
            k=a;
            a=b;
            b=k;
        }
         for(i=a;i<b;i++){
          if(i%5==2 || i%5==3){
              printf("%d\n",i);
          }
          }
    }

    return 0;
}
