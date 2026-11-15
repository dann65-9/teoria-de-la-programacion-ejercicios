#include <stdio.h>

void main() {
    // DATOS
    float z = 0.0;
    float p = 0.0;
    char operador;
    float resultado = 0.0;
    float mitad = 0.0;

    // ENTRADA DE DATOS
    printf("CALCULADORA BANCARIA\n");

    printf("Ingrese el primer numero: ");
    scanf("%f", &z);

    printf("Ingrese el segundo numero: ");
    scanf("%f", &p);

    printf("Ingrese el operador (+, -, *, /): ");
    scanf(" %c", &operador);

    // PROCESO
    if(operador == '+') {
        resultado = z + p;
    }
    else if(operador == '-') {
        resultado = z - p;
    }
    else if(operador == '*') {
        resultado = z * p;
    }
    else if(operador == '/' && p != 0.0) {
        resultado = z / p;
    }
    else if(operador == '/' && p == 0.0) {
        printf("\nERROR: Division para cero\n");
    }
    else {
        printf("\nOPERADOR NO VALIDO\n");
    }

    if((operador == '+' || operador == '-' || operador == '*') ||
       (operador == '/' && p != 0.0)) {

        mitad = resultado / 2;

        printf("\nOperacion: %.2f %c %.2f", z, operador, p);
        printf("\nResultado: %.2f", resultado);
        printf("\nLa mitad del resultado es: %.2f\n", mitad);
    }
}
