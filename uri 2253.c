#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,i,j,k,d,e,f,x,y,z;
    char ar[30]={"abcdefghijklmnopqrstuvwxyz"};
    char arr[30]={"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    char arrr[11]={"0123456789"};
    char ch[100];
    char chh;
    while(scanf("%[^\n]%*c",ch)!=EOF){
        //scanf(" ");
        //printf("%s\n%c\n",ch,chh);
        a=strlen(ch);
        b=0;
        c=0;
        d=0;
        e=1;
        x=0;
        y=0;z=0;
        if(a<6 || a>32){
            e=0;
        }
        for(i=0;i<a;i++){
            d=0;
           for(j=0;j<10;j++){
            if(ch[i]==arrr[j]){
                d=1;
                z=1;
                break;
            }
           }
           if(d==0){
                b=0;
                c=0;
            for(j=0;j<26;j++){
              if(ch[i]==ar[j]){
                b=1;
                x=1;
                break;
              }
              else if(ch[i]==arr[j]){
                c=1;
                y=1;
                break;
              }
            }
           }
           if(b==0 && c==0 && d==0){
                //printf("Senha invalida.\n");
                e=0;
                break;
            }

        }
        if(e==1 && x==1 && y==1 && z==1){
            printf("Senha valida.\n");
        }
        else
            printf("Senha invalida.\n");
        //scanf("%*c");
    }
    return 0;
}
