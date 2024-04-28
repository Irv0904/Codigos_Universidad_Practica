package Lab_03_25_09_2023.Lab_2._5HallarSumatoriaN;
import java.io.*;


public class _3SumatoriaIII
{
    static int n;
    static long sum; //declaramos sum como entero largo

    static long SumatoriaII (int N)
    {
        int i = 1, c = 2, p=1;
        long S = 0, T;

        while (i  <= N)
        {
            p = i*i;
            T = p*c;
            S = S + T;
            System.out.print (T+" + ");
            i++;
            c++;

        }
        return S;
    }
    public static void main (String args[]) throws IOException
    {
        String dato;
        InputStreamReader isr = new InputStreamReader (System.in);
        BufferedReader br = new BufferedReader (isr);

        System.out.println (" SUMATORIA DE 1x2 + 4x3 + 9x4 + 16x5 + 25x6...");
        System.out.println ("Cuantos terminos desea sumar....");
        dato = br.readLine ();
        n = Integer.parseInt (dato);
        sum = SumatoriaII (n);
        System.out.println ("\n\n La suma es " + sum);
    }
}
