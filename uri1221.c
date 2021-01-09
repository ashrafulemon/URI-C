#include<stdio.h>
int main()
{
    long int b,d;
    int a,i,j,c=0;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        c=0;
        scanf("%ld",&b);
        d=sqrt(b) + 1;
        for(j=2;j<d;j++){
            if(b%j==0){
                c=1;
                printf("Not Prime\n");
                break;
            }
        }
        if(c==0){
            printf("Prime\n");
        }
    }
        return 0;
}
