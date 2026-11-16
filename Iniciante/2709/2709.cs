
using System;
using System.Linq;

class Program
{
    static void Main()
    {
        // Entrada de dados
        string input = Console.In.ReadToEnd();

        if (string.IsNullOrWhiteSpace(input))
            return;

        int[] valores = input
            .Split((char[])null, StringSplitOptions.RemoveEmptyEntries)
            .Select(int.Parse)
            .ToArray();

        int pos = 0;

        while (pos < valores.Length)
        {
            int M = valores[pos++];

            int[] moedas = new int[20];

            for (int i = 0; i < M; i++)
            {
                moedas[i] = valores[pos++];
            }

            int N = valores[pos++];

            int soma = 0;

            // Desenvolvimento de dados
            for (int i = M - 1; i >= 0; i -= N)
            {
                soma += moedas[i];
            }

            // Verificação se é primo
            bool primo = true;

            if (soma < 2)
            {
                primo = false;
            }

            for (int i = 2; i < soma; i++)
            {
                if (soma % i == 0)
                {
                    primo = false;
                    break;
                }
            }

            // Saída de dados
            if (primo)
            {
                Console.WriteLine(
                    "You’re a coastal aircraft, Robbie, a large silver aircraft."
                );
            }
            else
            {
                Console.WriteLine("Bad boy! I’ll hit you.");
            }
        }
    }
}
