package Lab_03_25_09_2023.Lab_2._5HallarSumatoriaN;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class _2SumatoriaII
{
    static int n;
    static long sum; //declaramos sum como entero largo

    static long SumatoriaII (int N)
    {
        int i = 3; //c = 3;
        long S = 0, T;

        while (i <= N )
        {
            if (i %2 != 0)
            {
                T = i;
                S = S + T;
                //c++;

                System.out.print (T + " + ");
            }
            i++;
        }
        return S;
    }
    public static void main (String args[]) throws IOException
    {
        String dato;
        InputStreamReader isr = new InputStreamReader (System.in);
        BufferedReader br = new BufferedReader (isr);

        System.out.println (" SUMATORIA DE  2x3 + 3x4 + 4x5 + 5x6 + 6x7 + ...");
        System.out.println ("Cuantos terminos desea sumar....");
        dato = br.readLine ();
        n = Integer.parseInt (dato);
        sum = SumatoriaII (n);
        System.out.println ("\n\n La suma es " + sum);
    }

}
