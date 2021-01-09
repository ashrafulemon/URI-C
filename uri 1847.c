#include<stdio.h>
int main()
{
    int a,b,c,i,j,k,l,d,e,f,g,h;
    scanf("%d%d%d",&a,&b,&c);
    if(a>=-100 && a<=100 && b>=-100 && b<=100 && c>=-100 && c<=100)
    {
    i=a-b;
    j=b-a;
    k=b-c;
    l=c-b;
    if(a==b && b<c){
        printf(":)\n");
    }

    else if(a>b && b<=c){
        printf(":)\n");
    }
    else if(a>b && b>c && i>k){
        printf(":)\n");
    }
    else if(a>b && b>c && i<=k){
        printf(":(\n");
    }
    else if(a<b && b>=c){
        printf(":(\n");
    }
    else if(a<b && b<c && j<=l){
        printf(":)\n");
    }
     else if(a<b && b<c && j>l){
        printf(":(\n");
    }
     else if(a==b && b>=c){
        printf(":(\n");
    }
    }
    return 0;
}
