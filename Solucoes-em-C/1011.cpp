#include <stdio.h>
//Problema 1011 - Esfera
int main() {
 //Aqui o objetivo é calcular o volume de uma esfera dado um raio R
    double pi, R, V; //declarando as variáveis do tipo double
    //pi é o número pi mesmo; R é o raio da esfera; V é o volume da esfera;
    scanf("%lf", &R); //lendo o raio da esfera
    pi=3.14159; //atribuindo o valor que vai ser usado como pi
    V=(4/3.0)*pi*(R*R*R); //fórmula para o cálculo do volume de uma esfera
    printf("VOLUME = %.3lf\n", V); //imprimindo na tela o volume e limitando seu valor a 3 casas decimais;

    return 0;
}
