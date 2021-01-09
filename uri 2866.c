#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,i,j,k;
    char ar[10000];
    char ch[30]={"abcdefghijklmnopqrstuvwxyz"};
    scanf("%d%*c",&a);
    for(i=0;i<a;i++){
        scanf("%s",ar);
        b=strlen(ar);
        for(j=b-1;j>=0;j--){
            for(k=0;k<26;k++){
                if(ar[j]==ch[k])
                    printf("%c",ar[j]);
            }
        }
        printf("\n");
    }
    return 0;
}
