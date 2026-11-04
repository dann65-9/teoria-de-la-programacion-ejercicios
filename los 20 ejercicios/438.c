#include <stdio.h>
#include <string.h>

int main() {
   
    int edad = 0;
    char nacionalidad[30] = "";
    char nivel_educativo[50] = "";
    int puede_votar = 0;
    int resultado = 0;
    float bono = 0.0;
    int MAYORIA_EDAD = 18;
    int EDAD_MINIMA_VOTAR = 16;

    
    printf("Ingrese la edad:\n");
    scanf("%d", &edad);

    printf("Ingrese la nacionalidad:\n");
    scanf("%29s", nacionalidad);

    printf("Ingrese el nivel educativo:\n");
    scanf(" %49[^\n]", nivel_educativo);

    
    printf("Mayor de edad: %d\n", edad >= MAYORIA_EDAD);
    printf("Cumple edad minima y nacionalidad: %d\n",
           edad >= EDAD_MINIMA_VOTAR &&
           strcmp(nacionalidad, "ecuatoriana") == 0);

    if (edad >= MAYORIA_EDAD) {
        puede_votar = 1;
    }
    else {
        if (edad >= EDAD_MINIMA_VOTAR &&
            strcmp(nacionalidad, "ecuatoriana") == 0) {
            puede_votar = 1;
        }
        else {
            puede_votar = 0;
        }
    }

    
    if (puede_votar == 1) {
        printf("La persona puede votar\n");
        resultado = 1;
    }
    else {
        printf("La persona no puede votar\n");
        resultado = 0;
    }

    bono = resultado * 1.5;

    printf("Resultado: %d\n", resultado);
    printf("Bono: %.2f\n", bono);
    printf("Nivel educativo: %s\n", nivel_educativo);

    return 0;
}
