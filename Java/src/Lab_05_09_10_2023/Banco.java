package Lab_05_09_10_2023;

import java.util.Scanner;

public class Banco {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int saldo = 0, deposito = 0, retiro = 0, opcion = 0;

        System.out.print("Introduzca saldo inicial: ");
        saldo = scanner.nextInt();

        while (opcion != 5) {
            System.out.println("===Bienvenido al banco===");
            System.out.println("Elija una opción");
            System.out.println("1. Depositar");
            System.out.println("2. Retirar");
            System.out.println("3. Ver saldo");
            System.out.println("4. Abonar intereses");
            System.out.println("5. Salir");
            System.out.print("Su opción: ");
            opcion = scanner.nextInt();

            switch (opcion) {
                case 1:
                    System.out.print("Monto a depositar: ");
                    deposito = scanner.nextInt();
                    saldo += deposito;
                    break;
                case 3:
                    System.out.println("Su saldo es: " + saldo);
                    break;
                case 5:
                    System.out.println("Gracias por usar este programa");
                    break;
                default:
                    System.out.println("Opción no válida");
                    break;
            }
        }
    }
}
