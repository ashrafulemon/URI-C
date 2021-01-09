
#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,d,c,i,j,k;
    char cr;
    char dr;
    char ch[10]={"zabcdefgh"};
    scanf("%c%d%*c",&cr,&a);
    scanf("%c%d",&dr,&b);
  //  printf("%c %d\n",cr,a);
  //  printf("%c %d\n",dr,b);
    for(i=1;i<=8;i++){
        if(ch[i]==cr){
          c=i;
        }
        if(ch[i]==dr){
          d=i;
        }
    }
    if(c+1==d && (a+2==b || a-2==b))
        printf("VALIDO\n");
    else if(c+2==d &&(a+1==b || a-1==b) )
        printf("VALIDO\n");
    else if(c-1==d && (a+2==b || a-2==b))
        printf("VALIDO\n");
    else if(c-2==d &&(a+1==b || a-1==b) )
        printf("VALIDO\n");
    else
        printf("INVALIDO\n");
    return 0;
}
