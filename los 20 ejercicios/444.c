#include <stdio.h>

int main()
{
    
    float mph = 0.0;
    float ms = 0.0;
    float triple = 0.0;
    float factor  = 0.44704;
    
    printf("CONVERSION DE VELOCIDAD DE MPH A M/S\n");

    
    printf("Ingrese la velocidad en mph: ");
    scanf("%f", &mph);

    
    ms = mph * factor;

    
    printf("%.2f mph equivalen a %.2f m/s\n", mph, ms);
    printf("La velocidad es positiva: %d\n", ms > 0);

    if (ms > 0)
    {
        triple = ms * 3;
        printf("El triple de la velocidad es: %.2f m/s\n", triple);
    }
    else
    {
        printf("No se calcula el triple porque la velocidad no es positiva\n");
    }

    return 0;
}
