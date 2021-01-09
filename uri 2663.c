#include<stdio.h>
int main()
{
    int a,b,d=0,c,i,j=0,k;
    scanf("%d%d",&a,&b);
    int ar[a];
    for(i=0;i<a;i++){
        scanf("%d",&ar[i]);
    }
    for(i=0;i<a;i++){
        for(j=i+1;j<a;j++){
            if(ar[i]>ar[j]){
                c=ar[i];
                ar[i]=ar[j];
                ar[j]=c;
            }
        }
    }
    for(i=a-1;i>=0;i--){
        d=d+1;
        if(b==d){
            for(j=i-1;j>=0;j--){
                if(ar[i]!=ar[j])
                    break;
                d=d+1;
            }
            break;
        }
    }

    printf("%d\n",d);
    return 0;
}
