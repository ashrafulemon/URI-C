#include<stdio.h>
#include<string.h>
int main()
{
    int a,b=0,c=0,i=0,j=0,k;
    char ar[1000];
    while(1){
        scanf("%s%*c",ar);
        if(strcmp(ar,"ABEND")==0)
            break;
        else if(strcmp(ar,"SALIDA")==0){
            b=b+1;
            scanf("%d",&a);
            i=i+a;
        }
        else if(strcmp(ar,"VUELTA")==0){
            c=c+1;
            scanf("%d",&a);
            j=j+a;
        }
    }
    b=b-c;
    j=i-j;
    printf("%d\n%d\n",j,b);
    return 0;
}
