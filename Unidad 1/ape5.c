
#include <stdio.h>

int main() {

    float C1 = 0.0;
    float C2 = 0.0;
    float C3 = 0.0;
    float NC = 0.0;
    float NL = 0.0;
    float NF = 0.0;

    printf("Introduzca el valor de C1: ");
    scanf("%f", &C1);

    printf("Introduzca el valor de C2: ");
    scanf("%f", &C2);

    printf("Introduzca el valor de NL: ");
    scanf("%f", &NL);

    NC = (60.0 - (NL * 0.3)) / 0.7;

    C3 = (3.0 * NC) - C1 - C2;

    NF = (NC * 0.7) + (NL * 0.3);

    if (C3 < 0) {
        printf("El estudiante ya aprueba con las notas que tiene\n");
    }
    else {
        printf("La nota minima requerida del certamen 3 es: %.2f\n", C3);
    }

    printf("La nota final del estudiante es: %.2f\n", NF);

    return 0;
}
