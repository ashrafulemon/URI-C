
#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,i,j,d,k;
    scanf("%d%*c",&a);
    char ar[a+1][1000];
    char ch[30]={"abcdefghijklmnopqrstuvwxyz"};
    for(i=0;i<a;i++){
        d=0;
        scanf("%[^\n]%*c",ar[i]);
        c=strlen(ar[i]);
        for(j=0;j<26;j++){
            for(k=0;k<c;k++){
                if(ch[j]==ar[i][k]){
                    d++;
                    break;
                }
            }
        }
        if(d==26)
           printf("frase completa\n");
        else if(d>12)
           printf("frase quase completa\n");
        else
           printf("frase mal elaborada\n");

    }
    return 0;
}
