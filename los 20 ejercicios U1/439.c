#include <stdio.h>

int main() {
    
    float grados = 0.0;
    float radianes = 0.0;
    float resultado_cubo = 0.0;
    float PI = 3.14159;

    
    printf("=\n");
    printf(" CONVERSION DE GRADOS A RADIANES\n");
    printf("=\n");

    
    printf("Ingrese el angulo en grados:\n");
    scanf("%f", &grados);

    
    if (grados >= 0 && grados <= 360) {
        radianes = grados * PI / 180;
        resultado_cubo = radianes * radianes * radianes;

        
        printf("%.2f grados equivalen a %.5f radianes\n",
               grados, radianes);
        printf("Resultado elevado al cubo: %.5f\n",
               resultado_cubo);
        printf("Angulo dentro del rango permitido: 1\n");
    }
    else {
        printf("Angulo dentro del rango permitido: 0\n");
        printf("Error: ingrese un angulo entre 0 y 360 grados\n");
    }

    return 0;
}