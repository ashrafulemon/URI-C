#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,i,j,k,d;
    char ar[1000];
    char br[100]={"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    char brr[100]={"abcdefghijklmnopqrstuvwxyz"};
    char brrr[100]={"!@#$%^&*()-_=+[]{}|;':,./<"};
    char brrrr[100]={">? 0123456789"};
    while( scanf("%[^\n]%*c",ar)!=EOF){
       //printf("%s\n",ar);
        c=strlen(ar);
        for(j=0;j<c;j++){
            for(k=0;k<26;k++){
                if(ar[j]==br[k]){
                    d=k+13;
                    if(d<26)
                        printf("%c",br[d]);
                    else
                        printf("%c",br[d-26]);
                    break;
                }
                else if(ar[j]==brr[k]){
                    d=k+13;
                    if(d<26)
                        printf("%c",brr[d]);
                    else
                        printf("%c",brr[d-26]);
                    break;
                }
                else if(ar[j]==brrr[k]){
                    printf("%c",brrr[k]);
                    break;
                }
                else if(ar[j]==brrrr[k]){
                    printf("%c",brrrr[k]);
                    break;
                }
                else if(ar[j]=='"'){
                    printf("\"");
                    break;
                }

            }
        }
        printf("\n");
    }
    return 0;
}

