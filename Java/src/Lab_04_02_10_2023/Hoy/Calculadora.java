package Lab_04_02_10_2023.Hoy;

import java.util.Scanner;

public class Calculadora {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Ingrese primer valor: ");
        int valor1 = sc.nextInt();
        System.out.print("Ingrese segundo valor: ");
        int valor2 = sc.nextInt();
        System.out.print("Ingrese la operación que desea hacer (+,-,*,/): ");
        char operacion = sc.next().charAt(0);
        int resultado = 0;

        switch (operacion) {
            case '+':
                resultado = valor1 + valor2;
                System.out.println("La suma es: " + resultado);
                break;
            case '-':
                resultado = valor1 - valor2;
                System.out.println("La resta es: " + resultado);
                break;
            case '*':
                resultado = valor1 * valor2;
                System.out.println("El producto es: " + resultado);
                break;
            case '/':
                if (valor2 != 0) {
                    resultado = valor1 / valor2;
                    System.out.println("La división es: " + resultado);
                } else {
                    System.out.println("No se puede dividir por cero.");
                }
                break;
            default:
                System.out.println("Operación no válida.");
        }
    }
}
