#include <stdio.h>

int main()
{
    float fahrenheit, kelvin;
    float FACTOR = 0.5556, OFFSET_K = 273.15;
    int resultado;

    printf("CONVERSION DE FAHRENHEIT A KELVIN\n");

    fahrenheit = 0;
    printf("Ingrese Fahrenheit: ");
    scanf("%f", &fahrenheit);

    kelvin = ((fahrenheit - 32) * FACTOR) + OFFSET_K;
    resultado = kelvin >= 0;

    printf("\n%.2f F equivalen a %.2f K\n", fahrenheit, kelvin);
    printf("Comparacion: %d\n", resultado);

    if ((int)kelvin % 2 == 0)
        printf("La parte entera es par\n");
    else
        printf("La parte entera es impar\n");

    return 0;
}