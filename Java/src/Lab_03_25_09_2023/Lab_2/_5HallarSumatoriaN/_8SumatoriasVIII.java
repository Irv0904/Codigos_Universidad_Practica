package Lab_03_25_09_2023.Lab_2._5HallarSumatoriaN;

import java.io.IOException;

public class _8SumatoriasVIII
{
    static int n;
    static double sum;

    static double Sumatoria (int N)
    {
        double s = 0;

        int c;
        int a = 1;

        for (c = 2 ; c <= N ; c++)
        {
            s = s + 1 / ((double) c);
            System.out.print (a+"/" + (c) + " + ");
            a++;
        }
        return s;
    }
    public static void main (String[]  args) throws IOException
    {
        int n = 6;
        System.out.println (" SUMATORIA DE 1/2+ 1/4 + 1/6+ 1/8 + ...");
        System.out.println ("Cuantos terminos desea sumar....");
        sum = Sumatoria (n);
        System.out.println ("\n\n La suma es " + sum);
    }
}
