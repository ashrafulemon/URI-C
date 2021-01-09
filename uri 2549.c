#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,i,j,k,m,n;
    char dd[101]={" "};
    while(scanf("%d%d%*c",&a,&b)!=EOF){
        char ch[a][41];
        char chh[a][41];
        char chhh[101];
        for(i=0;i<a;i++){
            m=0;
            n=0;
            scanf("%[^\n]%*c",chhh);
            //printf("%s\n",ch[i]);
            b=strlen(chhh);
            for(j=0;j<b;j++){
                if(chhh[j]!=' '&& m==0){
                    chh[i][m]=chhh[j];
                    m++;
                }
                else  if(chhh[j]!=' '&& chhh[j-1]==' ' && m!=0){
                    chh[i][m]=chhh[j];
                    m++;
                }
            }
            chh[i][m]='\0';
           // printf("%s\n",chh[i]);
        }
        for(i=0;i<a;i++){
            for(j=i+1;j<a;j++){
                if(strcmp(chh[i],chh[j])==0 && strcmp(chh[i],dd)!=0 ){
                    strcpy(chh[j],dd);
                    n++;
                }
            }
        }
        printf("%d\n",n);
    }
    return 0;
}
