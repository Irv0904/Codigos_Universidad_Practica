package Lab_6_16_10_2023;

import java.io.FileWriter;
import java.io.IOException;
import java.util.Random;

public class Crear_Archivo {
    public static void main(String[] args) {
        final int TURNOS = 18;
        final int TRABPORTURNO = 40;
        Random random = new Random();

        try {
            FileWriter fileWriter = new FileWriter("evaluacion.dat");

            for (int i = 1; i <= TURNOS; i++) {
                for (int j = 1; j <= TRABPORTURNO; j++) {
                    if (i == 3 || i == 18) {
                        // Turno 3 or turno 18 pseudo-random between 5 and 10
                        int randomValue = random.nextInt(6) + 5;
                        fileWriter.write(randomValue + "\n");
                    } else {
                        // Rest of the turns pseudo-random between 0 and 10
                        int randomValue = random.nextInt(11);
                        fileWriter.write(randomValue + "\n");
                    }
                }
            }

            fileWriter.close();
            System.out.println("Proceso completado");
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
