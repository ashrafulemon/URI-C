#include<stdio.h>
int main()
{
    while(1){

    int a,b,c,e,x,y,z,d;
    scanf("%d%d%d%d",&a,&x,&b,&y);
    if(a>0 || b>0 || x>0 || y>0){
    if(a>=0 && b>=0 && a<=23 && b<=23 && x>=0 && y>=0 && x<60 && y<60 ){
if(a<b && x<=y)
{
        c=b-a;
        if(x<y){
        z=y-x;
      }
        else if(x==y){
        z=0;
      }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",c,z);
}
else if(a<b && x>=y)
{
        c=b-a-1;
        if(x==y){
        z=0;
      }
        else if(x>y){
        z=60-x;
        z=z+y;
     }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",c,z);
}
else if(a==b && x==y)
{
        c=24;
        if(x==y){
        z=0;
      }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",c,z);
}
else if(a==b && x>=y)
{
        c=24-1;
        if(x==y){
        z=0;
      }
        else if(x>y){
        z=60-x;
        z=z+y;
     }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",c,z);
}

else if(a==b && x<=y)
{
        c=0;
        if(x<y){
        z=y-x;
      }
        else if(x==y){
        z=0;
      }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",c,z);
}
else if(a>b && x<=y)
    {
        c=24-a;
        c=c+b;
        if(x<y){
        z=y-x;
      }
        else if(x==y){
        z=0;
      }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",c,z);
    }
else if(a>b && x>=y)
{
        c=24-a;
        c=c+b-1;
        if(x==y){
        z=0;
      }
        else if(x>y){
        z=60-x;
        z=z+y;
     }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",c,z);
}
  }
 }
    }
 return 0;
}


