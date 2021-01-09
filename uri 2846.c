
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b=0,c,i,d=0,j,k;
    scanf("%d",&a);
    int ar[100000];
    int br[100100];
    ar[0]=1;
    ar[1]=1;
    for(i=2;i<=25;i++){
        ar[i]=ar[i-1]+ar[i-2];
        b+=1;
        //printf("%d ",ar[i]);
        if(ar[i]>100000)
            break;
    }
    for(i=4;i<=100025;i++){
            c=0;
            for(j=0;j<=b;j++){
                if(i==ar[j]){
                    c=1;
                    break;
                }
            }
            if(c==0){
                br[d]=i;
                //printf("%d ",br[d]);
                d=d+1;
            }
    }
     printf("%d\n",br[a-1]);
    return 0;
}
