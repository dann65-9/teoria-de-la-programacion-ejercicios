#include <stdio.h>

int main()
{
    
    float a = 0.0;
    float b = 0.0;
    float mayor = 0.0;
    float cuadrado = 0.0;

    
    printf("IDENTIFICAR EL NUMERO MAYOR\n");
    printf("Ingrese el primer numero: ");
    scanf("%f", &a);

    printf("Ingrese el segundo numero: ");
    scanf("%f", &b);

    
    if (a > b)
    {
        mayor = a;
    }
    else
    {
        if (b > a)
        {
            mayor = b;
        }
        else
        {
            mayor = a;
        }
    }

    cuadrado = mayor * mayor;

    
    printf("El primer numero es mayor: %d\n", a > b);
    printf("El segundo numero es mayor: %d\n", b > a);
    printf("Numero mayor: %.2f\n", mayor);
    printf("Cuadrado del numero mayor: %.2f\n", cuadrado);
    printf("El numero mayor es positivo: %d\n", mayor > 0);

    return 0;
}