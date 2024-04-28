package Lab_05_09_10_2023;

import java.util.Scanner;

public class Promedio {
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        int calif;
        int suma1 = 0, suma2 = 0;
        float promedio1, promedio2;

        for (int i = 1; i <= 5; i++) {
            System.out.println("\nCalificaciones alumno " + i);
            for (int j = 1; j <= 3; j++) {
                System.out.print("\tDeme calif " + j + ": ");
                calif = scanner.nextInt();
                suma1 += calif;
            }
            promedio1 = (float) suma1 / 3;
            System.out.printf("\tEl promedio es %.2f%n", promedio1);
            suma2 += promedio1;
            suma1 = 0;
        }
        promedio2 = (float) suma2 / 5;
        System.out.printf("El promedio general es: %.2f%n", promedio2);
    }
}