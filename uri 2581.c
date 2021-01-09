#include<stdio.h>
int main()
{

    int a,b,c,i,j;
    scanf("%d%*c",&a);
    char ar[1000];
    for(i=0;i<a;i++){
        scanf("%[^\n]%*c",ar);
        printf("I am Toorg!\n");
    }
    return 0;
}
