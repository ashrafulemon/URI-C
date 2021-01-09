#include<stdio.h>
int main()
{
    int a,b=1,c=4,d,i,j,k;
    scanf("%d",&a);
    int ar[a];
    {
        for(i=0;i<a;i++)
        {
            for(j=b;j<c;j++){
             // if(j%4!=0){
              printf("%d ",j);
             // }
            }
            printf("PUM\n");
            b=b+4;
            c=c+4;
        }
    }
    return 0;
}
