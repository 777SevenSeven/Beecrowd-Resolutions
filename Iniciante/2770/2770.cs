
using System;
using System.Text;

class Program
{
    static void Main()
    {
        StringBuilder entrada = new StringBuilder();
        int c;

        while ((c = Console.Read()) != -1)
        {
            entrada.Append((char)c);
        }

        string[] dados = entrada.ToString().Split(
            new char[] { ' ', '\n', '\r', '\t' },
            StringSplitOptions.RemoveEmptyEntries
        );

        StringBuilder saida = new StringBuilder();
        int indice = 0;

        while (indice < dados.Length)
        {
            int X = int.Parse(dados[indice++]);
            int Y = int.Parse(dados[indice++]);
            int M = int.Parse(dados[indice++]);

            for (int i = 0; i < M; i++)
            {
                int Xi = int.Parse(dados[indice++]);
                int Yi = int.Parse(dados[indice++]);

                if ((Xi <= X && Yi <= Y) ||
                    (Xi <= Y && Yi <= X))
                {
                    saida.Append("Sim\n");
                }
                else
                {
                    saida.Append("Nao\n");
                }
            }
        }

        Console.Write(saida.ToString());
    }
}
