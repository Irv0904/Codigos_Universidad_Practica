package Lab_03_25_09_2023.Lab_2._5HallarSumatoriaN;
import java.io.*;


public class _1SumatoriaI
{
    static int n;
    static long sum; //declaramos sum como entero largo

    static long SumatoriaII (int N)
    {
        int i = 2, c = 3;
        long S = 0, T;

        while (i-1 <= N)
        {
            T = i * c;
            S = S + T;
            c++;
            i++;
            System.out.print (T + " + ");
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
