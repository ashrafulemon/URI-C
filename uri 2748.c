#include<stdio.h>
int main()
{
    int a,b,c,i,j,k;
    char ar[10][40];
    for(i=1;i<=7;i++){
        for(j=1;j<=39;j++){
            if(i==1 || i==7)
            ar[i][j]='-';
            if(i>1 && i<7)
                ar[i][j]=' ';
            if(i>1 && i<7 && (j==1 || j==39))
                ar[i][j]='|';
        }
    }
    ar[6][33]=ar[4][17]=ar[2][2]='x';
    ar[6][35]=ar[4][19]=ar[2][4]='=';
    ar[6][37]=ar[4][21]=ar[2][6]='3';
    ar[6][38]=ar[4][22]=ar[2][7]='5';
    for(i=1;i<=7;i++){
        for(j=1;j<=39;j++){
            printf("%c",ar[i][j]);
        }
        printf("\n");
    }

    return 0;
}
