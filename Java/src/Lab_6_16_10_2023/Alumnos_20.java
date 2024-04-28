package Lab_6_16_10_2023;

import java.util.Scanner;

public class Alumnos_20 {
    public static class Alumno {
        String nombre;
        float nota;
    }

    public static void main(String[] args) {
        Alumno[] alumnos = new Alumno[5];
        int x, opcion = 1;
        float sum = 0, cont = 0, mejor, peor;

        for (x = 0; x < 5; x++) {
            Scanner scanner = new Scanner(System.in);
            alumnos[x] = new Alumno();

            System.out.print("Introduzca nombre del alumno: ");
            alumnos[x].nombre = scanner.nextLine();
            System.out.print("Introduzca nota: ");
            alumnos[x].nota = scanner.nextFloat();
        }

        while (opcion == 1 || opcion == 2 || opcion == 3 || opcion == 4 || opcion == 5 || opcion == 6) {
            Scanner scanner = new Scanner(System.in);
            System.out.println("1- Buscar un alumno");
            System.out.println("2- Modificar nota");
            System.out.println("3- Media de todas las notas");
            System.out.println("4- Media de todas las notas inferiores a 5");
            System.out.println("5- Alumno con mejores notas");
            System.out.println("6- Alumno con peores notas");
            System.out.println("7- Salir");
            System.out.print("Introduzca una opción: ");
            opcion = scanner.nextInt();

            if (opcion == 1) {
                Alumno alum = new Alumno();
                Scanner scanner2 = new Scanner(System.in);
                System.out.print("Introduzca un nombre: ");
                alum.nombre = scanner2.nextLine();

                for (x = 0; x < 5; x++) {
                    if (alumnos[x].nombre.equals(alum.nombre)) {
                        System.out.println("\nNombre: " + alumnos[x].nombre);
                        System.out.println("Nota: " + alumnos[x].nota);
                    }
                }
            } else if (opcion == 2) {
                Alumno alum = new Alumno();
                Scanner scanner2 = new Scanner(System.in);
                System.out.print("Introduzca un nombre: ");
                alum.nombre = scanner2.nextLine();

                for (x = 0; x < 5; x++) {
                    if (alumnos[x].nombre.equals(alum.nombre)) {
                        Scanner scanner3 = new Scanner(System.in);
                        System.out.print("Introduzca una nota: ");
                        alumnos[x].nota = scanner3.nextFloat();
                        System.out.println("\nNota modificada.");
                    }
                }
            } else if (opcion == 3) {
                sum = 0;

                for (x = 0; x < 5; x++) {
                    sum += alumnos[x].nota;
                }

                System.out.println("\nLa media de las notas es de: " + (sum / 5));
            } else if (opcion == 4) {
                sum = 0;
                cont = 0;

                for (x = 0; x < 5; x++) {
                    if (alumnos[x].nota < 5) {
                        sum += alumnos[x].nota;
                        cont++;
                    }
                }

                System.out.println("\nLa media de las notas inferiores a 5 es: " + (sum / cont));
            } else if (opcion == 5) {
                mejor = 0;
                Alumno alum = new Alumno();

                for (x = 0; x < 5; x++) {
                    if (alumnos[x].nota > mejor) {
                        mejor = alumnos[x].nota;
                        alum.nota = alumnos[x].nota;
                        alum.nombre = alumnos[x].nombre;
                    }
                }

                System.out.println("\nEl alumno con mejores notas es: " + alum.nombre);
            } else if (opcion == 6) {
                peor = 10;
                Alumno alum = new Alumno();

                for (x = 0; x < 5; x++) {
                    if (alumnos[x].nota < peor) {
                        peor = alumnos[x].nota;
                        alum.nota = alumnos[x].nota;
                        alum.nombre = alumnos[x].nombre;
                    }
                }

                System.out.println("\nEl alumno con peores notas es: " + alum.nombre);
            }
        }
    }
}
