#include <stdio.h>

int main()
{
    float lado = 0.0;
    float perimetro = 0.0;

    
    printf("CALCULO DEL PERIMETRO DE UN CUADRADO\n");
    printf("Ingrese el lado del cuadrado: ");
    scanf("%f", &lado);

   
    if (lado > 0)
    {
        perimetro = 4 * lado;

        
        printf("Perimetro del cuadrado: %.2f\n", perimetro);
        printf("El resultado es positivo\n");
    }
    else
    {
        if (lado < 0)
        {
            perimetro = 4 * lado;

            printf("Perimetro del cuadrado: %.2f\n", perimetro);
            printf("El resultado es negativo\n");
        }
        else
        {
            printf("Error: el lado debe ser mayor que cero\n");
        }
    }

    return 0;
}
