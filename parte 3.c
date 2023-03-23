#include <stdio.h>

int main() {
    int n, i;
    long long a = 0, b = 1, c = 0;

    printf("Ingrese un número entero N: ");
    scanf("%d", &n);
    printf("Los primeros %d números de la serie de Fibonacci son: ", n);

    for (i = 1; i <= n; i++) {
        printf("%lld ", a);
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}