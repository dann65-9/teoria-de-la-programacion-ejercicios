#include <stdio.h>
#include <string.h>

int main() {
    // DATOS
    const float BAJO_PESO = 18.5;
    const float NORMAL_MAX = 24.9;
    const float SOBREPESO_MAX = 29.9;
    const float OBESIDAD_MAX = 34.9;
    const float OBESIDAD_SEVERA = 39.9;

    float peso = 0.0;
    float altura = 0.0;
    float imc = 0.0;
    float mitad = 0.0;
    char categoria[30];

    // ENTRADA DE DATOS
    printf("CALCULO DEL IMC\n");

    printf("Ingrese el peso en kg: ");
    scanf("%f", &peso);

    printf("Ingrese la altura en metros: ");
    scanf("%f", &altura);

    // PROCESO
    if(altura > 0) {

        // Calcular el indice de masa corporal
        imc = peso / (altura * altura);

        // Clasificar el resultado del IMC
        if(imc < BAJO_PESO) {
            strcpy(categoria, "Bajo peso");
        }
        else if(imc <= NORMAL_MAX) {
            strcpy(categoria, "Normal");
        }
        else if(imc <= SOBREPESO_MAX) {
            strcpy(categoria, "Sobrepeso");
        }
        else if(imc <= OBESIDAD_MAX) {
            strcpy(categoria, "Obesidad");
        }
        else if(imc <= OBESIDAD_SEVERA) {
            strcpy(categoria, "Obesidad severa");
        }
        else {
            strcpy(categoria, "Obesidad morbida");
        }

        // Calcular la mitad del resultado
        mitad = imc / 2;

        // SALIDA DE DATOS
        printf("\nIMC: %.2f", imc);
        printf("\nCategoria: %s", categoria);
        printf("\nMitad del resultado: %.2f\n", mitad);
    }
    else {
        printf("\nAltura no valida\n");
    }

    return 0;
}
