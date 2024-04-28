package Lab_04_02_10_2023.Hoy;

import java.util.Scanner;

public class Signo_Zodiaco
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Listado de signos del zodiaco:");
        System.out.println("1. Aries");
        System.out.println("2. Tauro");
        System.out.println("3. Géminis");
        System.out.println("4. Cáncer");
        System.out.println("5. Leo");
        System.out.println("6. Virgo");
        System.out.println("7. Libra");
        System.out.println("8. Escorpio");
        System.out.println("9. Sagitario");
        System.out.println("10. Capricornio");
        System.out.println("11. Acuario");
        System.out.println("12. Piscis");
        System.out.println("Introduzca número de signo: ");
        int numero = sc.nextInt();

        switch (numero) {
            case 1:
            case 5:
            case 9:
                System.out.println("Es un signo de Fuego.");
                break;
            case 2:
            case 6:
            case 10:
                System.out.println("Es un signo de Tierra.");
                break;
            case 3:
            case 7:
            case 11:
                System.out.println("Es un signo de Aire.");
                break;
            case 4:
            case 8:
            case 12:
                System.out.println("Es un signo de Agua.");
                break;
            default:
                System.out.println("ERROR: " + numero + " no está asociado a ningún signo.");
        }
    }
}
