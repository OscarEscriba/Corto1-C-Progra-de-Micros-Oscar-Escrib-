#include <stdio.h>
#include "libreriaoperaciones.h"

int main() {
    float a, b;

    printf("Ingrese dos valores: ");
    scanf("%f %f", &a, &b);

    printf("Valor de PI: %0.5f\n", PI);
    printf("Suma: %0.2f\n", suma(a, b));
    printf("Resta: %0.2f\n", resta(a, b));
    printf("Multiplicacion: %0.2f\n", multiplicacion(a, b));
    printf("Division: %0.2f\n", division(a, b));

    return 0;
}