#include<stdio.h>
#include<math.h>
int main()
{
    int a,b=0,c,i,j,k;
    scanf("%d",&a);
    int ar[a];
    for(i=0;i<a;i++){
        scanf("%d",&ar[i]);
        if(i>0 && ar[i]<ar[i-1] && b==0)
            b=i+1;
    }
    printf("%d\n",b);
    return 0;
}
