#include <stdio.h>

int main() {
    // DATOS
    float v1 = 0.0;
    float v2 = 0.0;
    float v3 = 0.0;
    float velocidad_promedio = 0.0;
    float producto_PI = 0.0;
    float PI = 3.14159;

    printf("CALCULO DE VELOCIDAD PROMEDIO\n");

    printf("Ingrese la primera velocidad:\n");
    scanf("%f", &v1);

    printf("Ingrese la segunda velocidad:\n");
    scanf("%f", &v2);

    printf("Ingrese la tercera velocidad:\n");
    scanf("%f", &v3);


    velocidad_promedio = (v1 + v2 + v3) / 3;

    if (velocidad_promedio > 0) {
        producto_PI = velocidad_promedio * PI;

        
        printf("Velocidad promedio: %.2f km/h\n", velocidad_promedio);
        printf("Producto por PI: %.2f\n", producto_PI);
        printf("La velocidad promedio es mayor que cero: 1\n");
    }
    else {
        printf("La velocidad promedio es mayor que cero: 0\n");
        printf("Error: la velocidad promedio debe ser mayor que cero\n");
    }

    return 0;
}