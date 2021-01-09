#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;
#define gravidade 9.80665
#define pi 3.14159

int main (){
    double altura, angulo, velocidade, vx, vy, tempohmax, hmax, tempodesc, alcance;
    int p1, p2, n;
   string acerto;
    cout << setprecision(5) << setiosflags(ios::fixed);

    while (cin >> altura){
        cin >> p1 >> p2;
        cin >> n;
        while (n!=0){
            cin >> angulo >> velocidade;
            vx = velocidade*cos(angulo*pi/180); //Calculo da velocidade no eixo x e conversão de radianos em graus
            vy = velocidade*sin(angulo*pi/180); //Calculo da velocidade no eixo y e conversão de radianos em graus
            tempohmax = vy/gravidade; //Tempo até chegar na maior altura possivel
            hmax = vy*tempohmax + 0.5*(-gravidade)*(tempohmax*tempohmax); //Calculo da Altura máxima (Desnecessário, mas também fiz kk)

            tempodesc =  sqrt((altura*2)/gravidade); // Tempo de descida do fim da parabola até o chão
            tempodesc += tempohmax; // Tempo de descida total (Altura máxima até o chão)
            alcance = vx*(tempohmax+tempodesc); //Alcance total
            if ((alcance>p1)&&(alcance<p2))
                acerto = " -> DUCK";
            else
                acerto = " -> NUCK";
            cout << alcance << acerto << endl;
            n--;
        }

    }

}
