#include <stdio.h>
#include <string.h>

int main()
{
    const int MIN_LONGITUD = 8;
    const int MAX_LONGITUD = 20;
    const int REQUIERE_MAYUS = 1;
    const int REQUIERE_DIGITO = 1;

    char contrasena[100];
    char caracter;
    int cantidad_caracteres;
    int mayuscula, digito;
    int es_valida, resultado;
    float mitad;
    int i;

    mayuscula = 0;
    digito = 0;

    printf("VALIDACION DE CONTRASENA\n");
    printf("Ingrese la contrasena: ");
    scanf("%99s", contrasena);

    cantidad_caracteres = strlen(contrasena);

    for(i = 0; i < cantidad_caracteres; i++)
    {
        caracter = contrasena[i];

        if(caracter >= 'A' && caracter <= 'Z')
            mayuscula = 1;

        if(caracter >= '0' && caracter <= '9')
            digito = 1;
    }

    es_valida = cantidad_caracteres >= MIN_LONGITUD &&
                cantidad_caracteres <= MAX_LONGITUD &&
                mayuscula == REQUIERE_MAYUS &&
                digito == REQUIERE_DIGITO;

    if(cantidad_caracteres >= MIN_LONGITUD && cantidad_caracteres <= MAX_LONGITUD)
        printf("\nLongitud correcta");

    if(mayuscula == 1)
        printf("\nContiene mayuscula");

    if(digito == 1)
        printf("\nContiene digito");

    if(es_valida == 1)
        resultado = 1;
    else
        resultado = 0;

    mitad = resultado / 2.0;

    printf("\nContrasena valida: %d", es_valida);
    printf("\nMitad del resultado: %.2f", mitad);

    printf("\n\nCONCLUSIONES");

    if(es_valida == 1)
        printf("\nLa contrasena cumple los criterios");
    else
        printf("\nLa contrasena no cumple los criterios");

    return 0;
}