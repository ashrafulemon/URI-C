#include<stdio.h>
int main()
{
    int a,b,c,i,j,k;
    int d,e,f;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
      if(a>=0 && a<360 && b>=0 && b<360)
      {
        d=a/30;
        e=b/6;
        printf("%02d:%02d\n",d,e);
      }
    }
    return 0;
}
