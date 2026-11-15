
#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, nota4, nota5;
    float suma, mayor, menor, promedio;

    printf("Ingrese cinco notas: ");
    scanf("%f %f %f %f %f", &nota1, &nota2, &nota3, &nota4, &nota5);

    suma = nota1 + nota2 + nota3 + nota4 + nota5;

    mayor = nota1;
    menor = nota1;

    if (nota2 > mayor) mayor = nota2;
    if (nota3 > mayor) mayor = nota3;
    if (nota4 > mayor) mayor = nota4;
    if (nota5 > mayor) mayor = nota5;

    if (nota2 < menor) menor = nota2;
    if (nota3 < menor) menor = nota3;
    if (nota4 < menor) menor = nota4;
    if (nota5 < menor) menor = nota5;

    promedio = (suma - mayor - menor) / 3;

    printf("\nSuma: %.2f", suma);
    printf("\nMayor: %.2f", mayor);
    printf("\nMenor: %.2f", menor);
    printf("\nPromedio: %.2f\n", promedio);

    return 0;
}
