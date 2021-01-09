
#include<stdio.h>
#include<math.h>


int abc(int b,int c)
{
    int k,j,z=0;
    while(c%b!=0){
        z=c;
        c=b;
        b=z%b;
      //  printf("%d %d\n",c,b);
    }
    return b;
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
