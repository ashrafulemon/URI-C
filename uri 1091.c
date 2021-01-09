#include<stdio.h>
int main()
{
  int a,b,c,d,i,j,x,y;
  while(scanf("%d",&a)){
    if(a==0)
        return 0;
    scanf("%d%d",&b,&c);
    for(i=0;i<a;i++){
         scanf("%d%d",&x,&y);
         if(b==x || c==y)
            printf("divisa\n");
         else if(x>b && y>c)
            printf("NE\n");
         else if(x<b && y>c)
            printf("NO\n");
         else if(x>b && y<c)
            printf("SE\n");
         else if(x<b && y<c)
            printf("SO\n");
    }
  }
  return 0;
}
