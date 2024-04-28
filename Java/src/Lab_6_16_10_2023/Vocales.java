package Lab_6_16_10_2023;

import java.util.Scanner;

public class Vocales {
    public static void main(String[] args) {
        int sum = 0;
        Scanner scanner = new Scanner(System.in);

        System.out.print("Introduzca una frase: ");
        String frase = scanner.nextLine().toLowerCase(); // Convert the input to lowercase for case insensitivity

        for (int x = 0; x < frase.length(); x++) {
            char c = frase.charAt(x);
            switch (c) {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    sum++;
                    break;
                default:
                    break;
            }
        }

        System.out.println("\n\nEn la frase hay " + sum + " vocales\n\n");
    }
}
