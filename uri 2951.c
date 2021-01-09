#include<stdio.h>
#include<string.h>
int main()
{
    int n,a,b,c=0,i,j,k;
    scanf("%d %d%*c",&n,&a);
    if(n>=1 && a<=100){
     char ar[n];
     char cr[n];
     int br[n];
     for(i=0;i<n;i++){
        scanf("%c %d%*c",&ar[i],&br[i]);
        if(br[i]<-100 || br[i]>100){
            return 0;
        }
    }
     scanf("%d%*c",&b);
     for(i=0;i<b;i++){
        scanf("%c%*c",&cr[i]);
    }
     for(i=0;i<b;i++){
        for(j=0;j<n;j++){
            if(cr[i]==ar[j]){
                c=c+br[j];
                break;
            }
        }
    }
     printf("%d\n",c);
     if(c>=b)
        printf("You shall pass!\n");
     else
        printf("My precioooous\n");

    }
    return 0;
}
