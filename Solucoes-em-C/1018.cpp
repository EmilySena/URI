#include <stdio.h>
//Problema 1018 - Cédulas
int main() {
//O objetivo aqui é tranformar número N na menor quantidade possível de cédulas;
    int N; //declarando o inteiro N
    scanf("%d", &N); //lendo o inteiro N
    if((N>0)&&(N<1000000)){ //o problema pede para limitar o valor de N
        printf("%d\n", N); //imprimindo o valor de N na tela
        printf("%d nota(s) de R$ 100,00\n", N/100); //quantidade de notas de 100
        N=N%100;
        printf("%d nota(s) de R$ 50,00\n", N/50); //quantidade de notas de 50
        N=N%50;
        printf("%d nota(s) de R$ 20,00\n", N/20); //quantidade de notas de 20
        N=N%20;
        printf("%d nota(s) de R$ 10,00\n", N/10); //quantidade de notas de 10
        N=N%10;
        printf("%d nota(s) de R$ 5,00\n", N/5); //quantidade de notas de 5
        N=N%5;
        printf("%d nota(s) de R$ 2,00\n", N/2); //quantidade de notas de 2
        N=N%2;
        printf("%d nota(s) de R$ 1,00\n", N/1); //quantidade de notas de 1
        N=N%1;
    }
    return 0;
}
