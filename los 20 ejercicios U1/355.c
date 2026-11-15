#include <stdio.h>

int main() {
    // DATOS
    int numero = 0;
    int c = 0;
    int d = 0;
    int u = 0;
    int invertido = 0;
    int es_capicua = 0;
    float mitad = 0.0;

    // ENTRADA DE DATOS
    printf("BIENVENIDO A LA CALCULADORA VETERINARIA\n");
    printf("Ingrese un numero de tres cifras: ");
    scanf("%d", &numero);

    // PROCESO
    if(numero >= 100 && numero <= 999) {

        // Extraer centenas, decenas y unidades
        c = numero / 100;
        d = (numero / 10) % 10;
        u = numero % 10;

        // Construir el numero invertido
        invertido = u * 100 + d * 10 + c;

        // Comprobar si el numero es capicua
        es_capicua = (numero == invertido);

        // Calcular la mitad del resultado
        mitad = invertido / 2.0;

        // SALIDA DE DATOS
        printf("\nNumero ingresado: %d", numero);
        printf("\nNumero invertido: %d", invertido);
        printf("\nEs capicua: %d", es_capicua);
        printf("\nMitad del resultado: %.2f\n", mitad);

    }
    else {
        printf("\nDebe ingresar un numero de tres cifras\n");
    }

    return 0;
}
