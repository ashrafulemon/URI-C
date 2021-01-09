#include<stdio.h>
#include<string.h>

int main()
{
    int a,b,c,i,j,k;
    char ar[100];
    char br[25][100]={"brasil","alemanha","austria","coreia","espanha","grecia","estados-unidos","inglaterra","australia","portugal","suecia","turquia","argentina","chile","mexico","antardida","canada","irlanda","belgica","italia","libia","siria","marrocos","japao"};
    char brr[25][100]={"Feliz Natal!","Frohliche Weihnachten!","Frohe Weihnacht!","Chuk Sung Tan!","Feliz Navidad!","Kala Christougena!","Merry Christmas!","Merry Christmas!","Merry Christmas!","Feliz Natal!","God Jul!","Mutlu Noeller","Feliz Navidad!","Feliz Navidad!","Feliz Navidad!","Merry Christmas!","Merry Christmas!","Nollaig Shona Dhuit!","Zalig Kerstfeest!","Buon Natale!","Buon Natale!","Milad Mubarak!","Milad Mubarak!","Merii Kurisumasu!"};

    while(scanf("%s",ar)!=EOF){
            c=0;
            //printf("%s\n",ar);
            for(i=0;i<24;i++){
                if(strcmp(ar,br[i])==0){
                    printf("%s\n",brr[i]);
                    c=1;
                    break;
                }
            }
            if(c==0)
            printf("--- NOT FOUND ---\n");
    }
    return 0;
}
