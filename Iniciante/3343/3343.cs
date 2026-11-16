
using System;
using System.Linq;

class Program
{
    static void Main()
    {
        string[] entrada = Console.ReadLine().Split();
        int n = int.Parse(entrada[0]);
        int x = int.Parse(entrada[1]);

        string ataque = Console.ReadLine();

        entrada = Console.ReadLine().Split();
        int p = int.Parse(entrada[0]);
        int m = int.Parse(entrada[1]);
        int g = int.Parse(entrada[2]);

        int[] walls = Enumerable.Repeat(x, n).ToArray();

        int posP = 0;
        int posM = 0;
        int posG = 0;

        foreach (char titan in ataque)
        {
            if (titan == 'P')
            {
                while (walls[posP] < p)
                    posP++;

                walls[posP] -= p;
            }
            else if (titan == 'M')
            {
                while (walls[posM] < m)
                    posM++;

                walls[posM] -= m;
            }
            else // G
            {
                while (walls[posG] < g)
                    posG++;

                walls[posG] -= g;
            }
        }

        int resposta = Math.Max(posP, Math.Max(posM, posG)) + 1;

        Console.WriteLine(resposta);
    }
}
