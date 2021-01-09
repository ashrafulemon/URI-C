#include<stdio.h>
#include<string.h>
int main()
{
    int a=1,b,c;
    char ar[100009];
    scanf("%s",ar);
    int i=0;
    while(ar[i]!='\0'){
        if(ar[i]=='z' || ar[i]=='Z' ){
           if(ar[i+1]=='e' || ar[i+1]=='E' ){
              if(ar[i+2]=='l' || ar[i+2]=='L' ){
                if(ar[i+3]=='d' || ar[i+3]=='D' ){
                  if(ar[i+4]=='a' || ar[i+4]=='A' ){
                     a=0;
                     break;
                  }
                }
              }
           }
        }
        i++;
    }
    if(a==1)
       printf("Link Tranquilo\n");
    else
       printf("Link Bolado\n");
    return 0;
}

