#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,d,i,j,k,m1,m2,m3,m4,m5,m6,m7,m8,n,o,p,x1,y1,x2,y2,x3,y3,x4,y4,x5,y5,x6,y6,x7,y7,x8,y8,z,l,q,r;
    char cr;
    char ch[8]={"zabcdefgh"};
    char chh[10];
    scanf("%c%d",&cr,&a);
    printf("%c %d\n",cr,a);
    for(i=1;i<=8;i++){
        if(ch[i]==cr){
          b=i;
          break;
        }
    }
    printf("%d\n",b);
    if(b+1>0 && b+1<9 && a+2>0 && a+2<9){
        m1=1;
        x1=b+1;
        y1=a+2;
    }
    if(b+1>0 && b+1<9 && a-2>0 && a-2<9){
        m2=1;
        x2=b+1;
        y2=a-2;
    }
    if(b+2>0 && b+2<9 && a+1>0 && a+1<9){
        m3=1;
        x3=b+2;
        y3=a+1;
    }
    if(b+2>0 && b+2<9 && a-1>0 && a-1<9){
        m4=1;
        x4=b+2;
        y4=a-1;
    }
    if(b-1>0 && b-1<9 && a+2>0 && a+2<9){
        m5=1;
        x5=b-1;
        y5=a+2;
    }
    if(b-1>0 && b-1<9 && a-2>0 && a-2<9){
        m6=1;
        x6=b-1;
        y6=a-2;
    }
    if(b-2>0 && b-2<9 && a+1>0 && a+1<9){
        m7=1;
        x7=b-2;
        y7=a+1;
    }
    if(b-2>0 && b-2<9 && a-1>0 && a-1<9){
        m8=1;
        x8=b-2;
        y8=a-1;
    }




}
