#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,i,j,k,q,r,l,m,n;
    scanf("%d%d",&a,&b);
    if(b!=0){
    q=a/b;
    r=a%b;
    k=abs(b);
    m=abs(a);
    if(r<=0 || r>k){
        for(l=-m;l<=m;l++){//q
          q=l;
          for(i=0;i<k;i++){//r
            r=i;
            j=b*q+r;
            if(a==j){
              break;
            }
          }
          if(a==j){
            break;
          }
        }
    }
    printf("%d %d\n",q,r);
    }
    return 0;
}
