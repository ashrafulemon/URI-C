#include<stdio.h>
int main()
{
    int a,b,c,i,j,k;
    float d=0,d1=0,d2=0,d3=0,d4=0,e,f;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        scanf("%d %d",&b,&c);
        if(b==1001){
          d=1.50*c*1.00;
        }
         if(b==1002){
          d1=2.50*c*1.00;
        }
         if(b==1003){
          d2=3.50*c*1.00;
        }
         if(b==1004){
          d3=4.50*c*1.00;
        }
         if(b==1005){
          d4=5.50*c*1.00;
        }
    }
    e=d+d1+d2+d3+d4;
    printf("%.2f\n",e);
    return 0;
}
