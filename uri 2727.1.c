#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,i,j,c,d,e,f;
    char aa[30]={"abcdefghijklmnopqrstuvwxyz"};
    char ar[10000];
    while(scanf("%d%*c",&a)!=EOF){
        for(i=0;i<a;i++){
            c=0;
            d=0;
            e=0;
            scanf("%[^\n]%*c",ar);
           b=strlen(ar);
           for(j=0;j<b;j++){
              if(ar[j]==' '){
                c=c+1;
                d=1;
              }
              if(d==0)
                e=e+1;
           }
           f=(c*3)+e-1;
           printf("%c\n",aa[f]);
        }
    }
    return 0;
}
