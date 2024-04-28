package Lab_05_09_10_2023;

import java.util.Scanner;

public class Calificacion {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int cal = 0;

        do {
            System.out.print("Deme la calificación: ");
            cal = scanner.nextInt();
        } while (cal < 0 || cal > 10);

        System.out.println("Gracias");
    }
}

