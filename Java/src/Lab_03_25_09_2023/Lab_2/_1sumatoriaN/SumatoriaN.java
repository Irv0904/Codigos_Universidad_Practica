//PROGRAMA PARA CALCULAR LA SUMATORIA
package Lab_03_25_09_2023.Lab_2._1sumatoriaN;
import java.io.*;
class SumatoriaN
{
    static int n;
    static double sum;

    static double Sumatoria (int N)
    {
        double s = 0;
        int c;

        for (c = 1 ; c <= N ; c++)
        {
            s = s + 1 / (2 * (double) c);
            System.out.print ("1/" + (2 * c) + " + ");
        }
        return s;
    }
    public static void main (String[]  args) throws IOException
    {
        String dato;
        InputStreamReader isr = new InputStreamReader (System.in);
        BufferedReader br = new BufferedReader (isr);
        System.out.println (" SUMATORIA DE 1/2+ 1/4 + 1/6+ 1/8 + ...");
        System.out.println ("Cuantos terminos desea sumar....");
        dato = br.readLine ();
        n = Integer.parseInt (dato);
        sum = Sumatoria (n);
        System.out.println ("\n\n La suma es " + sum);
    }
}