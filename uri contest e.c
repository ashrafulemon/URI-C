#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c=0,d=0,e=0,i,j,k;
    char ch[100]={"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    char ar[1000];
    while(scanf("%s%*c",&ar)!=EOF){
      c=0;
      d=0;
      e=0;
      a=strlen(ar);
      if(a>3){
            printf("Essa coluna nao existe Tobias!\n");
       }
      else{
       a=a-1;
       for(i=a;i>=0;i--){
            for(j=0;j<26;j++){
                if(ar[i]==ch[j]){
                    if(i==a){
                        c=j+1;
                        break;
                    }
                    if(i==a-1){
                        d=(j+1)*26;
                        break;
                    }
                    if(i==a-2){
                        e=(j+1)*26*26;
                        break;
                    }
                }
            }
       }
      b=c+d+e;
      if(b<=16384)
        printf("%d\n",b);
      else
        printf("Essa coluna nao existe Tobias!\n");
     }
    }
    return 0;
}
