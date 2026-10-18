#include <stdio.h>

int main() { 
    float GB = 1024;
    float espacio_documentos = 0.0;
    int cantidad_documentos = 0;
    float tamano_documentos = 0.0;
    float espacio_imagenes = 0.0;
    int cantidad_imagenes = 0;
    float tamano_imagenes = 0.0;
    float espacio_videos = 0.0;
    int cantidad_videos = 0;
    float tamano_videos = 0.0;
    int cantidad_programas = 0;
    float tamano_programas = 0.0;
    float espacio_programas = 0.0;
    float espaciototal = 0.0;
    float espaciogb = 0.0;
    float capacidaddisco = 0.0;
    float porcentaje = 0.0;

    /*printf("Por favor ingresa la cantidad de los documentos: ");
    scanf("%d", &cantidad_documentos);*/

    printf("Por favor ingresa la cantidad de los documentos: ");
    scanf("%d", &cantidad_documentos);

    printf("Por favor ingresa el tamano de los documentos: ");
    scanf("%f", &tamano_documentos);

    printf("Por favor ingresa la cantidad de las imagenes: ");
    scanf("%d", &cantidad_imagenes);

    printf("Por favor ingresa el tamano de las imagenes: ");
    scanf("%f", &tamano_imagenes);
    
    printf("Por favor ingresa la cantidad de los videos: ");
    scanf("%d", &cantidad_videos);
    
    printf("Por favor ingresa el tamano de los videos: ");
    scanf("%f", &tamano_videos);

    printf("Por favor ingresa la cantidad de los programas: ");
    scanf("%d", &cantidad_programas);
    
    printf("Por favor ingresa el tamano de los programas: ");
    scanf("%f", &tamano_programas);
    
    printf("Por favor ingresa la capacidad del disco: ");
    scanf("%f", &capacidaddisco);

    if (capacidaddisco <= 0) {
        printf(" Error: la capacidad del disco debe ser mayor que cero.\n");
        return 1;
    }

    espacio_documentos = cantidad_documentos * tamano_documentos;
    espacio_imagenes = cantidad_imagenes * tamano_imagenes;
    espacio_videos = cantidad_videos * tamano_videos;
    espacio_programas = cantidad_programas * tamano_programas;
    espaciototal = espacio_documentos + espacio_imagenes + espacio_videos + espacio_programas;
    espaciogb = espaciototal / GB;
    porcentaje = (espaciogb / capacidaddisco) * 100;
    

    printf("El espacio total ocupado es: %.2f GB\n", espaciogb);
    printf("El porcentaje de uso es: %.2f%%\n", porcentaje);


    return 0;
}