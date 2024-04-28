package Lab_6_16_10_2023;

public class Sumar_100_primo {
    public static void main(String[] args) {
        int x, cont, sum, i;
        int[] tabla = new int[100];
        i = 0;
        sum = 0;

        for (x = 1; x <= 100; x++) {
            cont = 0;
            if (x % 2 == 0) {
                tabla[i] = x;
                i++;
            }
        }

        for (x = 0; x < i; x++) {
            sum = sum + tabla[x];
        }

        System.out.println(sum);
    }
}
