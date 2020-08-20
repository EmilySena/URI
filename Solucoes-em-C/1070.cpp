#include <stdio.h>

int main() {

    //6 números ímpares a partir de um dado número X
    int X; //declarando X
    scanf("%d", &X); //lendo X
    int i=1, impar;
    if(X%2==0){
      impar=X+1;
      printf("%d\n", impar);
      for(i=1; i<6; i++){
        impar=impar+2;
        printf("%d\n", impar);
      }
    }else{
      impar=X;
      printf("%d\n", impar);
      for(i=1; i<6; i++){
        impar=impar+2;
        printf("%d\n",impar);
      }
    }
    return 0;
}
