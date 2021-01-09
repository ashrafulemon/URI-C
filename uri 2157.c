#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,i,j,k,d,e,f,g,h;
    while(scanf("%d",&a)!=EOF){
       for(i=0;i<a;i++){
        scanf("%d%d",&b,&c);
        d=c-b;
        char ch[d+10][7];
         for(j=0;j<=d;j++){
            printf("%d",b);
            sprintf(ch[j],"%d",b);
            b=b+1;
         }
         for(j=d;j>=0;j--){
            e=strlen(ch[j]);
            for(k=e-1;k>=0;k--){
                printf("%c",ch[j][k]);
            }
         }
         printf("\n");
       }
    }
    return 0;
}
