#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k=0,l,m=0;
    char ar[100];//={"asa"};
    scanf("%s",ar);
    l=strlen(ar);
    for(i=0;i<l;i++){
        if(ar[i]=='.'){
            if(ar[i+1]!='0'){
                printf("%c%c%c",ar[i+1],ar[i+2],ar[i+3]);

            }
            else if(ar[i+1]=='0' && ar[i+2]!='0'){
                printf("%c%c",ar[i+2],ar[i+3]);

            }
            else if(ar[i+1]=='0' && ar[i+2]=='0')
                printf("%c",ar[i+3]);


            printf(".");
            break;
        }
    }
    for(i=0;i<l-4;i++){
        if(ar[i]!='0'){
            m=1;
            break;
        }
    }
    for(i=0;i<l-4;i++){
        if(ar[i]!='0'){
            k=1;
        }
        if(k==1){
        printf("%c",ar[i]);
        }
       // else if()
    }
    if(m==0)
        printf("%c",ar[0]);
    printf("\n");
    return 0;
}
