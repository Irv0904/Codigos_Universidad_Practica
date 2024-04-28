package Lab_03_25_09_2023.Lab_2._4HallarValorParaSumatoria;
import java.io.*;

class SumatoriaN1
{
    static int n;
    static long sum; //declaramos sum como entero largo

    static long SumatoriaII (int N)
    {
        int i = 1, c = 6;
        long S = 0, T;

        while (i <= N)
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

        System.out.println (" SUMATORIA DE  1x6 + 2x7 + 3x8 + 4x9 + 5x10 ...");
        System.out.println ("Cuantos terminos desea sumar....");
        dato = br.readLine ();
        n = Integer.parseInt (dato);
        sum = SumatoriaII (n);
        System.out.println ("\n\n La suma es " + sum);
    }
}