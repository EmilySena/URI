#include <stdio.h>

int main() {

    float NUMBER, HORAS, X, SALARY;
    scanf("%f %f %f", &NUMBER, &HORAS, &X);
    SALARY=X*HORAS;
    printf("NUMBER = %.0f\nSALARY = U$ %.2f\n", NUMBER, SALARY);

    return 0;
}
