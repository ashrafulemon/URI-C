#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,a,b,c;
    char ar[1000];
    char ch[100]={"`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./"};
    while(scanf("%[^\n]%*c",&ar)!=EOF){
        a=strlen(ar);
        for(i=0;i<a;i++){
             for(j=0;j<48;j++){
                if(ar[i]==ch[j]){
                    printf("%c",ch[j-1]);
                    break;
                }
                if(ar[i]==' '){
                    printf(" ");
                    break;
                }
             }
        }
        printf("\n");
    }
    return 0;
}
