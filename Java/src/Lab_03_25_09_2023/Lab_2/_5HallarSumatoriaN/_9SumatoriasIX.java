package Lab_03_25_09_2023.Lab_2._5HallarSumatoriaN;

import java.io.IOException;

public class _9SumatoriasIX
{
    static int n;
    static double sum;

    static double Sumatoria (int N)
    {
        double s = 0;

        int c;

        for (c = 2 ; c <= N ; c++)
        {
            if(c %2 == 0)
            {
                s= s-1/((double)c);
                System.out.print (" -1/" + (c) + " + ");
            }
            else
            {
                s = s + 1 / ((double) c);
                System.out.print ("1/" + (c) );
            }

        }
        return s;
    }
    public static void main (String[]  args) throws IOException
    {
        int n = 7;
        System.out.println (" SUMATORIA DE 1/2+ 1/4 + 1/6+ 1/8 + ...");
        System.out.println ("Cuantos terminos desea sumar....");
        sum = Sumatoria (n);
        System.out.println ("\n\n La suma es " + sum);
    }
}
