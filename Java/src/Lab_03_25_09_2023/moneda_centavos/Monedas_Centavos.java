package Lab_03_25_09_2023.moneda_centavos;
import java.io.*;

public class Monedas_Centavos
{
    static double n;
    static double sum;
    static double Sumatoria (double N)
    {
        double s = 0;
        s = n *100;
        return s;
    }
    public static void main (String[]  args) throws IOException
    {
        String dato;
        InputStreamReader isr = new InputStreamReader (System.in);
        BufferedReader br = new BufferedReader (isr);
        System.out.println ("Cuantos terminos desea sumar....");
        dato = br.readLine ();
        n = Double.parseDouble (dato);
        sum = Sumatoria (n);
        System.out.println ("\n\n La suma es " + sum);
    }
}