package Lab_04_02_10_2023.Hoy;

import java.util.Scanner;

public class Imprimir_1_5 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Ingrese un valor entre 1 y 5: ");
        int valor = sc.nextInt();

        switch (valor) {
            case 1:
                System.out.println("Uno");
                break;
            case 2:
                System.out.println("Dos");
                break;
            case 3:
                System.out.println("Tres");
                break;
            case 4:
                System.out.println("Cuatro");
                break;
            case 5:
                System.out.println("Cinco");
                break;
            default:
                System.out.println("El valor está fuera de rango.");
        }
    }
}
