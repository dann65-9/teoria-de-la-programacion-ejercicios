#include <stdio.h>
#include <math.h>

int main() {
    
    int num_revoluciones = 0;
    float tiempo_segundos = 0.0;
    float vel_angular = 0.0;
    float angulo = 0.0;
    float cos_angulo = 0.0;
    float PI = 3.14159;

    
    printf("Ingrese las revoluciones:\n");
    scanf("%d", &num_revoluciones);

    printf("Ingrese el tiempo en segundos:\n");
    scanf("%f", &tiempo_segundos);

    
    if (tiempo_segundos > 0) {
        vel_angular = (num_revoluciones * 2 * PI) / tiempo_segundos;
        angulo = num_revoluciones * 2 * PI;
        cos_angulo = cos(angulo);

        
        printf("Velocidad angular: %.2f rad/s\n", vel_angular);
        printf("Coseno del angulo: %.2f\n", cos_angulo);
    }
    else {
        printf("Error: el tiempo debe ser mayor que cero\n");
    }

    return 0;
}
