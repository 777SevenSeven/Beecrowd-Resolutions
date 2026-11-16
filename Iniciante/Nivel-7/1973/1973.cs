/*
 * Beecrowd | 1973 - Jornada nas Estrelas
 * Categoria: Iniciante | Nível 7 | Assunto: Simulação
 * Link: https://judge.beecrowd.com/pt/problems/view/1973
 */



using System;



class Program

{

    static void Main()

    {

        int N = int.Parse(Console.ReadLine());



        long[] carneiros = new long[N];

        bool[] visitada = new bool[N];



        long total = 0;



        string[] entrada = Console.ReadLine().Split();



        for (int i = 0; i < N; i++)

        {

            carneiros[i] = long.Parse(entrada[i]);

            total += carneiros[i];

        }



        int pos = 0;

        long atacadas = 0;



        while (pos >= 0 && pos < N)

        {

            // Conta a estrela somente na primeira visita

            if (!visitada[pos])

            {

                visitada[pos] = true;

                atacadas++;

            }



            // Guarda a quantidade antes do roubo

            long antes = carneiros[pos];



            // Rouba um carneiro, se houver

            if (carneiros[pos] > 0)

            {

                carneiros[pos]--;

                total--;

            }



            // A direção depende da quantidade antes do roubo

            if (antes % 2 == 1)

                pos++;

            else

                pos--;

        }



        Console.WriteLine($"{atacadas} {total}");

    }

}

