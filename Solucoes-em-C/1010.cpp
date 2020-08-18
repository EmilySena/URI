#include <stdio.h>
//Problema 1010 - Cálculo Simples
int main() {

    int p1, Np1, p2, Np2; //declarando as variaveis inteiras
    //p1=peça 1; Np1 = quantidade de peças 1; p2=peça 2; Np2 = quantidade de peças 2;
    float Vp1, Vp2, Vtotal; //declarando as variaveis do tipo float
    //Vp1 = valor da peça 1; Vp2= valor da peça 2; Vtotal= variável que criei para armazenar o valor total de peças que váo ser compradas;
    scanf("%d %d %f ", &p1, &Np1, &Vp1); //lendo as infos da peça 1 na primeira linha
    scanf ("%d %d %f ", &p2, &Np2, &Vp2); //lendo as infos da peça 2 na segunda linha
    Vtotal= (Np1*Vp1)+(Np2*Vp2); //como foi feito o cálculo total das peças
    printf("VALOR A PAGAR: R$ %.2f\n", Vtotal); //limitando a impressão de apenas duas casas decimais

    return 0;
}
