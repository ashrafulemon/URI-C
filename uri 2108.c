#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,i,j=0,k,l=0,m,x=0,y=0,z=0,n=0;
    char ar[10000][100];
    int aa[10000];
    char cc[100];
    char br[1000][100];
    while(1){
        scanf("%[^\n]%*c",ar[l]);
        if(strcmp(ar[l],"0")==0)
            break;
        a=strlen(ar[l]);
        k=0;
        for(i=0;i<a;i++){
            if(ar[l][i]==' '){
                printf("%d-",k);
                if(j==0){
                    m=k;
                    x=l;
                    y=i-k;
                    z=i;
                    }
                if(k>=m && j!=0){
                    m=k;
                    x=l;
                    y=i-k;
                    z=i;
                }
                k=0;
                j++;
            }
            if(ar[l][i]!=' '){
                k++;
            }
            if(i==a-1){
                printf("%d\n",k);
                if(j==0){
                    m=k;
                    x=l;
                    y=i-k;
                    z=i;
                }
                if(k>=m && j!=0){
                    m=k;
                    x=l;
                    y=i-k;
                    z=i;
                }
                j++;
            }
        }
        l++;
    }
    printf("\n");
    printf("The biggest word: ");
    for(i=y+1;i<=z;i++){
        printf("%c",ar[x][i]);
        if(i==z)
            printf("\n");
    }
    return 0;
}
