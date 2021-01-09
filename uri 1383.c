#include<stdio.h>
int main()
{
    int a,b,c,i,j,k,m,n,l,p;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        int ar[9][9];
        for(j=0;j<9;j++){
            for(k=0;k<9;k++){
               scanf("%d",&ar[j][k]);
            }
        }
        m=0;
        for(j=0;j<9;j++){
            for(k=0;k<9;k++){
                for(l=0;l<9;l++){
                    if(ar[j][k]==ar[j][l] && l!=k){
                      //  printf("%d  %d\n",ar[j][k],j);
                        m=1;
                        break;
                    }
                    if(ar[k][j]==ar[l][j] && l!=k){
                      //  printf("%d  %d\n",ar[k][j],j);
                        m=1;
                        break;
                    }
                }
             if(m==1)
                break;
            }
            if(m==1)
                break;
        }
        for(j=0;j<3;j++){
          for(p=0;p<3;p++){
            for(k=0;k<3;k++){
               for(l=0;l<3;l++){
                   if(ar[j][p]==ar[k][l]  && j!=k && p!=l){
                      m=1;
                      break;
                   }
               }
                if(m==1)
                break;
            }
            if(m==1)
                break;
          }
            if(m==1)
                break;
        }

        for(j=3;j<6;j++){
          for(p=0;p<3;p++){
            for(k=3;k<6;k++){
               for(l=0;l<3;l++){
                   if(ar[j][p]==ar[k][l]  && j!=k && p!=l){
                      m=1;
                      break;
                   }
               }
                if(m==1)
                break;
            }
            if(m==1)
                break;
          }
            if(m==1)
                break;
        }
        for(j=6;j<9;j++){
          for(p=0;p<3;p++){
            for(k=6;k<9;k++){
               for(l=0;l<3;l++){
                   if(ar[j][p]==ar[k][l]  && j!=k && p!=l){
                      m=1;
                      break;
                   }
               }
                if(m==1)
                break;
            }
            if(m==1)
                break;
          }
            if(m==1)
                break;
        }
        for(j=0;j<3;j++){
          for(p=3;p<6;p++){
            for(k=0;k<3;k++){
               for(l=3;l<6;l++){
                   if(ar[j][p]==ar[k][l]  && j!=k && p!=l){
                      m=1;
                      break;
                   }
               }
                if(m==1)
                break;
            }
            if(m==1)
                break;
          }
            if(m==1)
                break;
        }
        for(j=0;j<3;j++){
          for(p=6;p<9;p++){
            for(k=0;k<3;k++){
               for(l=6;l<9;l++){
                   if(ar[j][p]==ar[k][l]  && j!=k && p!=l){
                      m=1;
                      break;
                   }
               }
                if(m==1)
                break;
            }
            if(m==1)
                break;
          }
            if(m==1)
                break;
        }
        for(j=3;j<6;j++){
          for(p=3;p<6;p++){
            for(k=3;k<6;k++){
               for(l=3;l<6;l++){
                   if(ar[j][p]==ar[k][l]  && j!=k && p!=l){
                      m=1;
                      break;
                   }
               }
                if(m==1)
                break;
            }
            if(m==1)
                break;
          }
            if(m==1)
                break;
        }
        for(j=3;j<6;j++){
          for(p=6;p<9;p++){
            for(k=3;k<6;k++){
               for(l=6;l<9;l++){
                   if(ar[j][p]==ar[k][l]  && j!=k && p!=l){
                      m=1;
                      break;
                   }
               }
                if(m==1)
                break;
            }
            if(m==1)
                break;
          }
            if(m==1)
                break;
        }
        for(j=6;j<9;j++){
          for(p=3;p<6;p++){
            for(k=6;k<9;k++){
               for(l=3;l<6;l++){
                   if(ar[j][p]==ar[k][l]  && j!=k && p!=l){
                      m=1;
                      break;
                   }
               }
                if(m==1)
                break;
            }
            if(m==1)
                break;
          }
            if(m==1)
                break;
        }
        for(j=6;j<9;j++){
          for(p=6;p<9;p++){
            for(k=6;k<9;k++){
               for(l=6;l<9;l++){
                   if(ar[j][p]==ar[k][l]  && j!=k && p!=l){
                      m=1;
                      break;
                   }
               }
                if(m==1)
                break;
            }
            if(m==1)
                break;
          }
            if(m==1)
                break;
        }

        printf("Instancia %d\n",i+1);
        if(m==0)
            printf("SIM\n\n");
        else
            printf("NAO\n\n");
    }
    return 0;
}
