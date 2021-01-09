#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,i,j,k,f;
    char ar[1000];
    char br[1000];
    char aa[100]={"0123456789"};
    scanf("%d%*c",&a);
    for(i=0;i<a;i++){
            f=0;
        scanf("%[A-Z]",ar);
        scanf("%s%*c",br);
       // printf("%s - %s\n",ar,br);
        b=strlen(ar);
        c=strlen(br);
       // printf("%c\n",br[4]);
        for(j=1;j<c;j++){
            for(k=0;k<10;k++){
                if(br[j]==aa[k]){
                        f=f+1;
                        break;
                    }
                }
        }
       // printf("%d\n",f);
        if(b==3 && c==5 && br[0]=='-' && f==4){
            if(br[4]=='1' || br[4]=='2')
                printf("MONDAY\n");
            else if(br[4]=='3' || br[4]=='4')
                printf("TUESDAY\n");
            else if(br[4]=='5' || br[4]=='6')
                printf("WEDNESDAY\n");
            else if(br[4]=='7' || br[4]=='8')
                printf("THURSDAY\n");
            else if(br[4]=='9'|| br[4]=='0')
                printf("FRIDAY\n");
            else
                printf("FAILURE\n");
        }
        else
            printf("FAILURE\n");
    }
    return 0;
}
