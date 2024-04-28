package Lab_6_16_10_2023;

import java.util.Scanner;

public class Vivero_Forestal {
    public static void main(String[] args) {
        int i = 0;
        double actual = 0;
        double nuevo = 0;
        double[] inf = new double[6]; // Inflacion con indices de 0 a 5

        System.out.println("Programa precios de planta");
        Scanner scanner = new Scanner(System.in);

        System.out.print("Introduzca el precio actual: ");
        actual = scanner.nextDouble();
        nuevo = actual;

        for (i = 0; i < 6; i++) {
            System.out.print("Introduzca la inflacion del mes " + (i + 1) + ": ");
            inf[i] = scanner.nextDouble();
            nuevo = nuevo * (1 + inf[i] / 100);
        }

        System.out.println("\nEl precio nuevo del producto debe ser: " + nuevo);
    }
}

