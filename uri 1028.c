#include<stdio.h>
#include<math.h>


int abc(int b,int c)
{
    int k,j,z=1;
    int ar[b];
    for(j=1;j<=(b/2+1);j++){
          if(b%j==0){
            ar[z]=j;
           // printf("%d\n",ar[z]);
            z=z+1;
          }
    }
    ar[z]=b;
    for(j=z;j>0;j--){
        if(b%ar[j]==0 && c%ar[j]==0){
            k=ar[j];
            break;
        }
    }
    return k;
}
int main()
{
    int a,b,c,i,j,k,l;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        scanf("%d%d",&b,&c);
        if(c<b){
           l=c;
           c=b;
           b=l;
        }
        k= abc(b,c);
        printf("%d\n",k);
    }
    return 0;
}
