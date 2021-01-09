
#include<stdio.h>
#include<string.h>
int main()
{
    int n,a=0,c=0,d=0,g=0,f=0,i,j,k;
    char ar[100];
    char arr;
    char A;
    char E;
    char H;
    char M;
    char X;
    scanf("%d",&n);
  //  if(n>0 && n<=10){
    for(i=0;i<n;i++)
    {
       scanf("%s %c",ar,&arr);
       if(arr=='A'){
          a=a+1;
       }
       if(arr=='E'){
          c=c+1;
       }
        if(arr=='H'){
          d=d+1;
       }
        if(arr=='M'){
          f=f+1;
       }
        if(arr=='X'){
          g=g+1;
       }
    }
    printf("%d Hobbit(s)\n",g);
    printf("%d Humano(s)\n",d);
    printf("%d Elfo(s)\n",c);
    printf("%d Anao(s)\n",a);
    printf("%d Mago(s)\n",f);
   // }
    return 0;
}
