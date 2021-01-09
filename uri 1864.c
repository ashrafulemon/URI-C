/// LIFE IS NOT A PROBLEM TO BE SOLVED
#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,i,j,k;
    char ar[100]={"LIFE IS NOT A PROBLEM TO BE SOLVED"};
    scanf("%d",&a);
    if(a>=0 && a<=34){
    a=a-1;
    for(i=0;i<=a;i++)
    {
        printf("%c",ar[i]);
    }
    printf("\n");
    }
    return 0;
}
