#include<stdio.h>
int main()
{
    double a,b,c,d;
    int i=0,j=0,k=0;
    scanf("%lf%lf%lf",&a,&b,&c);
    double arr[3]={a,b,c};
    for(i=0;i<3;i++){
     for(j=i+1;j<3;j++){
      if(arr[i]>arr[j]){
        d=arr[i];
        arr[i]=arr[j];
        arr[j]=d;}}}
    a=arr[2];
    b=arr[1];
    c=arr[0];
    if(a>=(b+c)){
        printf("NAO FORMA TRIANGULO\n");
        if(a==b && b==c){
        printf("TRIANGULO EQUILATERO\n");}
        else if(a==b || a==c || b==c){
        printf("TRIANGULO ISOSCELES\n");}}
    else if((a*a)==((b*b)+(c*c))){
        printf("TRIANGULO RETANGULO\n");
        if(a==b && b==c){
        printf("TRIANGULO EQUILATERO\n");}
        else if(a==b || a==c || b==c){
        printf("TRIANGULO ISOSCELES\n");}}
    else if((a*a)>((b*b)+(c*c))){
        printf("TRIANGULO OBTUSANGULO\n");
        if(a==b && b==c){
        printf("TRIANGULO EQUILATERO\n");}
        else if(a==b || a==c || b==c){
        printf("TRIANGULO ISOSCELES\n");}}
    else if((a*a)<((b*b)+(c*c))){
        printf("TRIANGULO ACUTANGULO\n");
        if(a==b && b==c){
        printf("TRIANGULO EQUILATERO\n");}
        else if(a==b || a==c || b==c){
        printf("TRIANGULO ISOSCELES\n");}}
   return 0;
}
