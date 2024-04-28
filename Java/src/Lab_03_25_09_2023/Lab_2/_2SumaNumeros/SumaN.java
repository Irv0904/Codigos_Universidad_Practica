
//PROGRAMA SUMATORIA II
package Lab_03_25_09_2023.Lab_2._2SumaNumeros;

import java.io.*;
class SumaN
{
    static int n;
    static long sum; //declaramos sum como entero largo

    static long SumatoriaII (int N)
    {
        int i = 1, c = 4;
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

        System.out.println (" SUMATORIA DE  1x4 + 2x5 + 3x6 + 4x7 + 5x8 ...");
        System.out.println ("Cuantos terminos desea sumar....");
        dato = br.readLine ();
        n = Integer.parseInt (dato);
        sum = SumatoriaII (n);
        System.out.println ("\n\n La suma es " + sum);
    }
}
