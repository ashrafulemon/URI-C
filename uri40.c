#include<stdio.h>
int main()
{
    float a,b,c,d,e,t,f,g;
    scanf("%f%f%f%f",&a,&b,&c,&d);
    e=((a*2)+(b*3)+(c*4)+(d*1))/(2+3+4+1);
    printf("Media: %.1f\n",e);
    if(e>=7)
    {
    printf("Aluno aprovado.\n");
    }
    else if(e<5)
    {
    printf("Aluno reprovado.\n");
    }
    else if(e>=5 && e<7)
    {
       printf("Aluno em exame.\n") ;
       scanf("%f",&t);
       f=(e+t)/2;
       printf("Nota do exame: %.1f\n",t);
       if(f>=5)
       {
           printf("Aluno aprovado.\n");
       }
       else if(f<=4.9)
       {
           printf("Aluno reprovado.\n");
       }
       printf("Media final: %.1f\n",f);
    }
    return 0;
}
