package Lab_03_25_09_2023.Lab_2._5HallarSumatoriaN;

import java.io.*;

public class _6SumatoriasVI {
    static int n;
    static long sum; //declaramos sum como entero largo

    static long SumatoriaII (int N)
    {
        int i = 1;
        long S = 0, T,P=0;

        while (i  <= N)
        {
            P +=2;
            T = (long) Math.pow(P, 2);
            S = S + T;
            System.out.print(T + " + ");
            i++;
        }
        return S;
    }
    public static void main (String args[]) throws IOException
    {
        String dato;
        InputStreamReader isr = new InputStreamReader (System.in);
        BufferedReader br = new BufferedReader (isr);

        System.out.println (" SUMATORIA DE 2^2 + 4^2+ 6^2 + 8^2 + ...");
        System.out.println ("Cuantos terminos desea sumar....");
        dato = br.readLine ();
        n = Integer.parseInt (dato);
        sum = SumatoriaII (n);
        System.out.println ("\n\n La suma es " + sum);
    }
}
