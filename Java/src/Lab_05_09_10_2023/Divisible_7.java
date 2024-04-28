package Lab_05_09_10_2023;

public class Divisible_7 {
    public static void main(String[] args) {
        for (int x = 1; x <= 30; x++) {
            System.out.print(x + "\t");
            if (x % 7 == 0) {
                System.out.println();
            }
        }
    }
}