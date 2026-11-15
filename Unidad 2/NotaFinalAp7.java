import java.util.Scanner;

public class NotaFinalAp7{
    public static void main(String[] args) {

        float individual = 0.0f;
        float grupal = 0.0f;
        float evaluacion = 0.0f;
        float promedio = 0.0f;

        Scanner sc = new Scanner(System.in);

        // Datos
        System.out.println("CALCULO DE NOTA FINAL UNIDAD 1");

        System.out.println("Ingrese la nota individual:");
        individual = sc.nextFloat();

        System.out.println("Ingrese la nota grupal:");
        grupal = sc.nextFloat();

        System.out.println("Ingrese la nota de evaluacion final:");
        evaluacion = sc.nextFloat();

        // Proceso
        if (individual >= 0 && individual <= 10 &&
            grupal >= 0 && grupal <= 10 &&
            evaluacion >= 0 && evaluacion <= 10) {

            promedio = (individual * 0.30f) +
                       (grupal * 0.30f) +
                       (evaluacion * 0.40f);

            // Resultados
            System.out.println("\nNOTAS INGRESADAS");
            System.out.println("Nota individual: " + individual);
            System.out.println("Nota grupal: " + grupal);
            System.out.println("Evaluacion final: " + evaluacion);
            System.out.printf("Promedio ponderado: %.2f\n", promedio);

            // Nivel de desempeno
            if (promedio >= 9) {
                System.out.println("Nivel: Excelente");
                System.out.println("¡Felicitaciones! Rendimiento sobresaliente");
            }
            else if (promedio >= 8) {
                System.out.println("Nivel: Muy bueno");
            }
            else if (promedio >= 7) {
                System.out.println("Nivel: Bueno");
            }
            else if (promedio >= 5) {
                System.out.println("Nivel: Regular");
            }
            else {
                System.out.println("Nivel: Deficiente");
            }

            // Estado final
            if (promedio >= 7) {
                System.out.println("Estado: APROBADO");
            }
            else {
                System.out.println("Estado: REPROBADO");
                System.out.println("El estudiante requiere refuerzo academico");
            }

        }
        else {
            System.out.println("Error: Las notas deben estar entre 0 y 10");
        }

        sc.close();
    }
}
