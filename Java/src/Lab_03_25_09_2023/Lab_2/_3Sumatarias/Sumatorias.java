package Lab_03_25_09_2023.Lab_2._3Sumatarias;

//PROGRAMA PARA CALCULAR LA SUMATORIA III
import java.io.*;
class Sumatorias
{
    static int n;
    static double sum;

    static double SumatoriaIII (int N)
    {
        double s = 0;
        long c, num;

        for (c = 1 ; c <= N ; c++)
        {
            num = 1;
            for (int i = 1 ; i <= c - 1 ; i++)
                num = num * c;
            s = s + (double) num / (double)((c + 2));
            System.out.print (num + "/" + (c + 2) + " + ");
        }
        return s;
    }


    public static void main (String args[]) throws IOException
    {
        String dato;
        InputStreamReader isr = new InputStreamReader (System.in);
        BufferedReader br = new BufferedReader (isr);
        System.out.println (" SUMATORIA DE 1/3+ 2^1/4 + 3^2/5+ 4^3/10 + ...");
        System.out.println ("Cuantos terminos desea sumar....");
        dato = br.readLine ();
        n = Integer.parseInt (dato);
        sum = SumatoriaIII (n);
        System.out.println ("\n\n La suma es " + sum);
    }
}


