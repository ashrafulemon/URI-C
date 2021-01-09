#include<stdio.h>
#include<string.h>
int main()
{
    int a,b=0,c=0,i,j,k;
    char ar[1000];
    char arr[1000];
    char f[10] ="F";
    char m[10] ="M";
    scanf("%d",&a);
    if(a>0 && a<=1000){
    for(i=0;i<a;i++)
    {
       scanf("%s%s",ar,arr);
       if(strcmp(arr,m)==0){
          b=b+1;
       }
       if(strcmp(arr,f)==0){
          c=c+1;
       }
    }
    printf("%d carrinhos\n",b);
    printf("%d bonecas\n",c);
    }
    return 0;
}
