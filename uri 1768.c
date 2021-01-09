#include<stdio.h>
int main()
{
    int a,b,c,i,j,k;
    while(scanf("%d",&a)!=EOF){
        c=a/2+1;
        b=1;
        k=c;
        for(i=0;i<c;i++){
            for(j=0;j<k;j++){
                if(j==k-1){
                    k=k-1;
                    break;
                }
                else
                    printf(" ");
            }
            for(j=0;j<b;j++){
                printf("*");
            }
            b=b+2;
            printf("\n");
        }
        k=c;
        for(i=0;i<2;i++){
            for(j=0;j<k;j++){
                if(j==k-1){
                    if(i==0)
                    printf("*\n");
                    k=k-1;
                    if(i==1)
                        printf("***\n");
                    break;
                }
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
