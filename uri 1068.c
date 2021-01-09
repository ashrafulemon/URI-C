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
        if(ar[i]=='('){
            c++;
            a++;
        }
        if(ar[i]==')'){
            c--;
            b++;
            if(c<0){
                k=0;
                break;
            }
        }
    }
    if(a!=b)
        k=0;
    return k;
 }

int main()
{
    int a,b,c,d,i,j,k;
    char ar[1009];
    while(scanf("%s%*c",ar)!=EOF){
        k=abc(ar);
        if(k==1)
            printf("correct\n");
        else
            printf("incorrect\n");
    }
    return 0;
}
