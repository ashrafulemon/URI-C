#include<stdio.h>
#include<string.h>

 int abc(char ar[1009])
 {
    int a,b,c,d,i,j,k;
    d=strlen(ar);
    c=0;
    k=1;
    b=0;
    a=0;
    for(i=0;i<d;i++){
        if(ar[i]=='<'){
            c++;
            a++;
        }
        if(ar[i]=='>' && c>0){
            c--;
            b++;
        }
    }
    return b;
 }

int main()
{
    int a,b,c,d,i,j,k;
    scanf("%d",&a);
    while(a>0){
        char ar[1009];
        scanf("%s",ar);
       // printf("%s\n",ar);
        k=abc(ar);
        printf("%d\n",k);
        a--;
    }
    return 0;
}
