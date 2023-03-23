#include <stdio.h>

int main() {
    int n = 10; // se define el tamaño del array
    int arr[n]; // se procede a declarar el array
    int *ptr = arr; // apuntar al primer elemento en el array

    // valores a ingresar por el usuario
    printf("Ingrese %d valores enteros:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // recorrer el array utilizando y mostrar cada elemento ingresado por el usuario multiplicado por 2
    printf("Array multiplicado por 2:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", *ptr * 2);
        ptr++; 
    }
    printf("\n");

    return 0;
}