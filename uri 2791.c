#include<stdio.H>
int main()
{
    int a[5],i,j;
    for(i=1;i<=4;i++)
        scanf("%d",&a[i]);
    for(j=1;j<=4;j++){
        if(a[j]==1){
            printf("%d\n",j);
            break;
        }
    }
    return 0;
}
