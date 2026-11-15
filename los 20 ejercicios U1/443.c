#include <stdio.h>

int main()
{
   
    int anio = 0;
    int es_siglo_xxi = 0;
    int factorial = 1;
    int i = 1;
    float INICIO_SIGLO_XXI = 2001.0;
    float FIN_SIGLO_XXI = 2100.0;

    
    printf("COMPROBAR EL SIGLO XXI\n");
    printf("Ingrese un anio: ");
    scanf("%d", &anio);

    
    es_siglo_xxi = (anio >= INICIO_SIGLO_XXI) &&
                   (anio <= FIN_SIGLO_XXI);

    
    if (es_siglo_xxi == 1)
    {
        printf("El anio pertenece al siglo XXI\n");
    }
    else
    {
        printf("El anio no pertenece al siglo XXI\n");
    }

    if (anio > 0 && anio < 10)
    {
        factorial = 1;
        i = 1;

        while (i <= anio)
        {
            factorial = factorial * i;
            printf("Factorial parcial: %d\n", factorial);
            i = i + 1;
        }

        printf("Factorial del anio: %d\n", factorial);
    }
    else
    {
        printf("No se calcula el factorial: el anio debe ser positivo y menor que 10\n");
    }

    return 0;
}
