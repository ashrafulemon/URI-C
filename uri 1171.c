#include<stdio.h>
int main()
{
    int a,b,c=0,o=0,k,i,j;
    scanf("%d",&a);
    int ar[a];
    for(i=0;i<a;i++){
        scanf("%d",&ar[i]);
    }
    for(i=0;i<a;i++){
        for(j=i;j<a;j++){
            if(ar[i]>ar[j]){
               c=ar[j];
               ar[j]=ar[i];
               ar[i]=c;
            }
        }
    }
    for(i=1;i<a;i++){
        o=o+1;
        if(ar[i-1]!=ar[i]){
            printf("%d aparece %d vez(es)\n",ar[i-1],o);
            o=0;
        }
        if(i==(a-1)){
            o=o+1;
            printf("%d aparece %d vez(es)\n",ar[i],o);
        }
    }
    return 0;
}
