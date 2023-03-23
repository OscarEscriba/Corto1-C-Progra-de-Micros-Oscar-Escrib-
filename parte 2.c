#include <stdio.h>

int main()
{
    float f, c;
    printf("Ingrese la temperatura en grados Fahrenheit: ");
    scanf("%f", &f);
    c=(f-32)*5/9;
    printf("La temperatura en celsius es: %.2f\n", c);
    return 0;
}