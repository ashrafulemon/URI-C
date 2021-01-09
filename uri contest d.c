#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,i,j,k,aa,bb,cc;
    int  aaa,bbb,ccc;
    char ar[1000];
    scanf("%[^\n]",ar);
    //printf("%s",ar);
    scanf("%d/%d/%d",&a,&b,&c);
    scanf("%d/%d/%d",&aa,&bb,&cc);
    aaa= a+(b*30)+(c*365);
    bbb= aa+(bb*30)+(cc*365);
    ccc=aaa-bbb;
    ccc=ccc/365;
    if(a==aa && b==bb)
        printf("Feliz aniversario!\n");
    printf("Voce tem %d anos %s.\n",ccc,ar);

    return 0;
}
