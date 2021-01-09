#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,d,i,j,k;
    char ch[100];
    char g[100]="Thor";
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%s",ch);
        scanf("%d",&b);
        //k=strcmp(ch,g);
        if(strcmp(ch,g)==0 && b>=1 && b<=25000){
            printf("Y\n");
        }
        else
            printf("N\n");
    }
    return 0;
}
