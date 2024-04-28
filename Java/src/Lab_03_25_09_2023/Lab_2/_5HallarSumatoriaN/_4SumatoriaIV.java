package Lab_03_25_09_2023.Lab_2._5HallarSumatoriaN;
import java.io.*;

public class _4SumatoriaIV
{
    static int n;
    static double sum; //declaramos sum como entero largo

    static double SumatoriaII (int N)
    {
        int i = 1, c = 1;
        double S = 0, T;

        while (i <= N)
        {
            T = 1.0 / c;
            S = S + T;
            c *= 5;
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

        System.out.println (" SUMATORIA DE  1 + 1/5 + 1/125 + 1/625...");
        System.out.println ("Cuantos terminos desea sumar....");
        dato = br.readLine ();
        n = Integer.parseInt (dato);
        sum =  SumatoriaII (n);
        System.out.println ("\n\n La suma es " + sum);
    }
}
