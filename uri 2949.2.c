
#include<stdio.h>
#include<string.h>
int main()
{
    int n,b=0,c=0,d=0,g=0,f=0,i,j,k;
    char ar[1000];
    char arr[1000];
    char a[10] ="A";
    char e[10] ="E";
    char h[10] ="H";
    char m[10] ="M";
    char x[10] ="X";
    scanf("%d",&n);
   // if(n>0 && n<=10){
    for(i=0;i<n;i++)
    {
       scanf("%s%s",ar,arr);
       if(strcmp(arr,a)==0){
          b=b+1;
       }
       if(strcmp(arr,e)==0){
          c=c+1;
       }
        if(strcmp(arr,h)==0){
          d=d+1;
       }
        if(strcmp(arr,m)==0){
          f=f+1;
       }
        if(strcmp(arr,x)==0){
          g=g+1;
       }
    }
    printf("%d Hobbit(s)\n",g);
    printf("%d Humano(s)\n",d);
    printf("%d Elfo(s)\n",c);
    printf("%d Anao(s)\n",b);
    printf("%d Mago(s)\n",f);
   // }
    return 0;
}

