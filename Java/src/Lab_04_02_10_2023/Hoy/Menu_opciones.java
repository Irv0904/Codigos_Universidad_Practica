package Lab_04_02_10_2023.Hoy;

import java.util.Scanner;

public class Menu_opciones {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("\tMenú\n");
        System.out.println("Elegir la opción deseada");
        System.out.println("a) Ingresar");
        System.out.println("b) Registrarse");
        System.out.println("c) Salir");
        char op = sc.next().charAt(0);

        switch (op) {
            default:
                System.out.println("Opción no válida.");
                break;
            case 'a':
                System.out.println("Se seleccionó 'Ingresar'.");
                break;
            case 'b':
                System.out.println("Se seleccionó 'Registrarse'.");
                break;
            case 'c':
                System.out.println("Se seleccionó 'Salir'.");
                break;
        }
    }
}
