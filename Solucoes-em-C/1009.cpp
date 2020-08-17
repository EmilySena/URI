#include <stdio.h>

int main ()
{
  char nome[61];
  scanf("%s", nome);
  double salario, montante, x;
  scanf("%lf %lf", &salario, &montante);
  x=salario+(0.15*montante);
  printf("TOTAL = R$ %.2lf\n", x);




return 0;
}
