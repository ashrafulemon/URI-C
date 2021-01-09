#include<stdio.h>
int main()
{
    int a,b,c,d,i,j,k;
    int ar[1000];
    float e,f,g,h;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        c=0;
        k=0;
        scanf("%d",&b);
        for(j=0;j<b;j++){
            scanf("%d",&ar[j]);
            c=c+ar[j];
        }
        e=c*1.00/b;
        for(j=0;j<b;j++){
            if(e<ar[j]){
               k=k+1;
            }
            f=k*100.00/b;
        }
        printf("%.3f%%\n",f);
    }
    return 0;
}
