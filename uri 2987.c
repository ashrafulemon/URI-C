#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j;
    char br;
    char ah[30]={"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    scanf("%c",&br);
    for (i=0;i<26;i++)
    {
        if(ah[i]==br){
            break;
        }
    }
    i=i+1;
    printf("%d\n",i);
    return 0;
}
