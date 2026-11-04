#include <stdio.h>
#include <math.h>

int main()
{
    
    float peso, altura, imc, logaritmo;
    float BAJO, NORMAL, ALTO;
    char categoria[20];

    
    peso = 0;
    altura = 0;
    imc = 0;
    logaritmo = 0;

    BAJO = 18.5;
    NORMAL = 25.0;
    ALTO = 30.0;

    
    printf("Ingrese el peso en kilogramos: ");
    scanf("%f", &peso);

    printf("Ingrese la altura en metros: ");
    scanf("%f", &altura);

    
    if (peso > 0 && altura > 0)
    {
        imc = peso / (altura * altura);

        if (imc < BAJO)
        {
            sprintf(categoria, "Bajo peso");
        }
        else
        {
            if (imc >= BAJO && imc < NORMAL)
            {
                sprintf(categoria, "Normal");
            }
            else
            {
                if (imc >= NORMAL && imc < ALTO)
                {
                    sprintf(categoria, "Sobrepeso");
                }
                else
                {
                    sprintf(categoria, "Obesidad");
                }
            }
        }

        logaritmo = log10(imc);

        
        printf("\n--- RESULTADOS ---\n");
        printf("IMC: %.2f\n", imc);
        printf("Categoria: %s\n", categoria);
        printf("Logaritmo base 10: %.4f\n", logaritmo);
    }
    else
    {
        printf("\nError: el peso y la altura deben ser mayores que cero.\n");
    }

    return 0;
}
