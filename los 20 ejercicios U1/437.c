
#include <stdio.h>

int main() {

    float peso = 0.0;
    float altura = 0.0;
    int edad = 0;
    float IMC = 0.0;
    float porcentaje_grasa = 0.0;
    float doble_resultado = 0.0;
    float SEXO_FACTOR = 1.20;
    float EDAD_FACTOR = 0.23;

    printf("Ingrese el peso en kg:\n");
    scanf("%f", &peso);

    printf("Ingrese la altura en metros:\n");
    scanf("%f", &altura);

    printf("Ingrese la edad:\n");
    scanf("%d", &edad);

    if (altura > 0) {
        IMC = peso / (altura * altura);
        porcentaje_grasa = (IMC * SEXO_FACTOR) + (edad * EDAD_FACTOR) - 16.2;
        doble_resultado = porcentaje_grasa * 2;

        printf("IMC: %.2f\n", IMC);
        printf("Porcentaje de grasa: %.2f\n", porcentaje_grasa);
        printf("Doble del resultado: %.2f\n", doble_resultado);
        
    }
    else {
        printf("Error: la altura debe ser mayor que cero\n");
    }
     printf("¡Sigue esforzandote para alcanzar tus metas xDD!\n");

    return 0;
}
