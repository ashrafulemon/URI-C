#include<stdio.h>
#include<string.h>
int main()
{
    int a,n,b,c,d,i,j,k;
    char cc;
    char ch[100]={"abcdefghijklmnopqrstuvwxyz"};
    char chh[100]={"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    scanf("%d",&n);
    for(i=0;i<n;i++){
        k=0;
        scanf("%d%c%d",&a,&cc,&b);
       // printf("%d %c %d\n",a,cc,b);
        for(j=0;j<26;j++){
            if(cc==ch[j]){
                c=a+b;
                break;
            }
            if(cc==chh[j]){
                c=b-a;
                break;
            }
        }
        if(a==b){
            c=a*b;
        }
        printf("%d\n",c);
    }
    return 0;
}
