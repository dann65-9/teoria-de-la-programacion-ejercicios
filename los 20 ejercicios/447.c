#include <stdio.h>
#include <math.h>

int main()
{
    float a, cuadrado, residuo;
    int resultado;

    a = 0;
    cuadrado = 0;
    residuo = 0;

    printf("Ingrese un numero real: ");
    scanf("%f", &a);

    cuadrado = pow(a, 2);

    residuo = fmod(cuadrado, 2);

    resultado = cuadrado >= 0;

    printf("\nEl cuadrado de %.2f es %.2f\n", a, cuadrado);

    printf("Resultado de la comparacion: %d\n", resultado);
    printf("Residuo de la division: %.2f\n", residuo);

    if (resultado == 1)
    {
        printf("Sigue esforzandote, cada ejercicio te acerca a tu meta :D.\n");
    }

    return 0;
}
