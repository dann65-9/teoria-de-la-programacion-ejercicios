#include <stdio.h>
#include <math.h>

int main()
{
    
    float kilometros = 0.0;
    float litros = 0.0;
    float rendimiento = 0.0;
    float diferencia = 0.0;
    float RENDIMIENTO_IDEAL = 12.0;

    
    printf("CALCULO DEL RENDIMIENTO\n");
    printf("Ingrese los kilometros recorridos: ");
    scanf("%f", &kilometros);

    printf("Ingrese los litros consumidos: ");
    scanf("%f", &litros);

    
    if (litros > 0)
    {
        rendimiento = kilometros / litros;
        diferencia = fabs(rendimiento - RENDIMIENTO_IDEAL);

        
        printf("Rendimiento: %.2f km/l\n", rendimiento);
        printf("Es eficiente: %d\n",
               rendimiento >= RENDIMIENTO_IDEAL);
        printf("Diferencia absoluta: %.2f\n", diferencia);

        printf(" Sigue esforzandote para ser el mejor u.u\n");
    }
    else
    {
        printf("Error: los litros deben ser mayores que cero\n");
    }

    return 0;
}