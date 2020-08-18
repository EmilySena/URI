#include <stdio.h>
 //Problema 1012 - Área
int main() {
 //O objetivo desse problema é calcular a área de de algumas formas geométricas
    double A, B, C, pi, aTR, aC, aT, aQ, aR; //criação das variaveis do tipo double, porque precisaremos de dupla precisão
//A, B, C serão os valores dos lados ou raio, n o caso do círculo
//aTR= área do triangulo retangulo; aC = área do círculo; aT= área do trapézio;
//aQ= área do quadrado; aR= área do retângulo;
    scanf("%lf %lf %lf", &A, &B, &C); //lendo A, B, C
    pi=3.14159; //valor de pi que vai ser usado
    //a seguir fórmulas dos cálculos de cada área
    aTR=(A*C)/2.0;
    aC=pi*C*C;
    aT=((A+B)*C)/2.0;
    aQ=B*B;
    aR=A*B;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", aTR, aC, aT, aQ, aR);
 //limitando a impressão até a terceira casa decimal como pede o problema
    return 0;
}
