package Lab_6_16_10_2023;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class Abrir_archivo {
    public static void main(String[] args) {
        final int TURNOS = 18;
        final int TRABPORTURNO = 40;
        int haySuspensos = 0; // 0 equivale a falso, 1 a verdadero
        int[][] nota = new int[TURNOS][TRABPORTURNO];

        System.out.println("Programa Encuesta encargados\n");

        try {
            File file = new File("evaluacion.dat");
            Scanner scanner = new Scanner(file);

            for (int i = 0; i < TURNOS; i++) {
                for (int j = 0; j < TRABPORTURNO; j++) {
                    nota[i][j] = scanner.nextInt();

                    for (j = 0; j < 5; j++) {
                        haySuspensos = 1;
                        // No todos los operarios del turno aprueban al encargado
                    }
                }
                // Fin del bucle interno

                if (haySuspensos == 0) {
                    System.out.printf("Todos los operarios del turno %d han aprobado al encargado\n", i + 1);
                }

                haySuspensos = 0;
            }

            scanner.close();
        } catch (FileNotFoundException e) {
            e.printStackTrace();
        }
    }
}
