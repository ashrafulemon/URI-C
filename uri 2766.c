#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,i,j;
    char ar[10][1000];
    for(i=0;i<10;i++){
        scanf("%s",ar[i]);
    }
    printf("%s\n",ar[2]);
    printf("%s\n",ar[6]);
    printf("%s\n",ar[8]);
    return 0;
}
