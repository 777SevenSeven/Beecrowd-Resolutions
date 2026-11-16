
using System;
using System.Collections.Generic;

class Program
{
    static void Main()
    {
        List<long> entrada = new List<long>();
        string linha;

        while ((linha = Console.ReadLine()) != null)
        {
            string[] partes = linha.Split(
                new char[] { ' ', '\t', '\r' },
                StringSplitOptions.RemoveEmptyEntries
            );

            foreach (string parte in partes)
            {
                entrada.Add(long.Parse(parte));
            }
        }

        int indice = 0;

        while (indice < entrada.Count)
        {
            int N = (int)entrada[indice++];

            long total = 0;
            long[] a = new long[N];

            for (int i = 0; i < N; i++)
            {
                a[i] = entrada[indice++];
                total += a[i];
            }

            long somaRangel = 0;
            long melhor = long.MaxValue;

            for (int i = 0; i < N; i++)
            {
                somaRangel += a[i];

                long somaGugu = total - somaRangel;
                long diferenca = Math.Abs(somaRangel - somaGugu);

                if (diferenca < melhor)
                    melhor = diferenca;
            }

            Console.WriteLine(melhor);
        }
    }
}
