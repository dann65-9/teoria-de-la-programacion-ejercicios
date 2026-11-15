#include <stdio.h>
#include <string.h>

int main() {
    // DESCRIPCION:
    // Ingresar una nota, clasificarla y calcular su mitad.

    // DATOS
    const float A_MIN = 90;
    const float B_MIN = 80;
    const float C_MIN = 70;
    const float D_MIN = 60;
    const float F_MIN = 0;
    const float NOTA_MAX = 100;

    float nota = 0.0;
    float mitad = 0.0;
    char calificacion = 'X';
    char cadena[30];

    // ENTRADA DE DATOS
    printf("CLASIFICACION DE NOTAS\n");
    printf("Ingrese la nota: ");
    scanf("%f", &nota);

    // PROCESO
    if(nota >= A_MIN && nota <= NOTA_MAX) {
        calificacion = 'A';
        strcpy(cadena, "Excelente");
    }
    else if(nota >= B_MIN && nota < A_MIN) {
        calificacion = 'B';
        strcpy(cadena, "Muy bueno");
    }
    else if(nota >= C_MIN && nota < B_MIN) {
        calificacion = 'C';
        strcpy(cadena, "Bueno");
    }
    else if(nota >= D_MIN && nota < C_MIN) {
        calificacion = 'D';
        strcpy(cadena, "Regular");
    }
    else if(nota >= F_MIN && nota < D_MIN) {
        calificacion = 'F';
        strcpy(cadena, "Reprobado");
    }
    else {
        calificacion = 'X';
        strcpy(cadena, "Nota no valida");
    }

    mitad = nota / 2;

    // SALIDA DE DATOS
    printf("\nNota: %.2f", nota);
    printf("\nCalificacion: %c", calificacion);
    printf("\nDescripcion: %s", cadena);
    printf("\nMitad de la nota: %.2f\n", mitad);

    return 0;
}
