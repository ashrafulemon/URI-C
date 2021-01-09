#include<stdio.h>
int main()
{
    int a,b,c,i,j;
    double k;
    char ar[11000];
    scanf("%d%*c",&a);
    for(i=0;i<a;i++){
        scanf("%s%*c",ar);
        j=0;
        while(ar[j]!='\0'){
            j++;
        }
        k=j*1.00/100;
        printf("%.2lf\n",k);
    }
    return 0;
}
