#include <stdio.h>

int main() {
    
    int m = 0;
    int r = 0;
    int son_iguales = 0;
    int son_diferentes = 0;
    int resultado = 0;
    float inverso = 0.0;

    
    printf("Ingrese el primer numero:\n");
    scanf("%d", &m);

    printf("Ingrese el segundo numero:\n");
    scanf("%d", &r);

    
    son_iguales = (m == r);
    son_diferentes = (m != r);


    if (son_iguales == 1) {
        printf("Los numeros son iguales\n");
        resultado = son_iguales;
    }
    else {
        printf("Los numeros son diferentes\n");
        resultado = son_diferentes;
    }

    
    if (resultado != 0) {
        inverso = 1.0 / resultado;
        printf("Inverso multiplicativo: %.2f\n", inverso);
    }
    else {
        printf("No se puede calcular el inverso porque el resultado es cero\n");
    }

    printf("Son iguales: %d\n", son_iguales);
    printf("Son diferentes: %d\n", son_diferentes);

    return 0;
}
