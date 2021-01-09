#include<stdio.h>
int main()
{
    int a,b,c,d,i,j,k=0,ar[1000],arr[1000],br[1000];
    scanf("%d%d%d",&a,&b,&c);
    if(a<1 && a>100 && b<1 && b>a/2 && c<1 && c>300)
        return 0;
     for(i=0;i<b;i++){
         scanf("%d",&ar[i]);
       //  if(ar[i]<1)
        //    return 0;
     }
     for(i=0;i<c;i++){
         scanf("%d",&arr[i]);
         //if(arr[i]>a)
          //  return 0;
     }
     for(i=0;i<b;i++){
         for(j=0;j<c;j++){
            if(ar[i]==arr[j]){
                k=k+1;
                break;
            }
         }
     }
     d=b-k;
     printf("%d\n",d);
   return 0;
}
