#include<stdio.h>
#include<string.h>
int main()
{

    char a[100]="AMO FAZER EXERCICIO NO URI";
    printf("<%s>\n",a);
    printf("<%30s>\n",a);
    printf("<%.20s>\n",a);
    printf("<%-20s>\n",a);
    printf("<%-30s>\n",a);
    printf("<%.30s>\n",a);
    printf("<%30.20s>\n",a);
    printf("<%-30.20s>\n",a);
    return 0;
}
