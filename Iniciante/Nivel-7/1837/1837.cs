/*
 * Beecrowd | 1837 - Prefácio
 * Categoria: Iniciante | Nível 7 | Assunto: Ad hoc
 * Link: https://judge.beecrowd.com/pt/problems/view/1837
 */



using System;



class Program

{

    static void Main()

    {

        string[] entrada = Console.ReadLine().Split();

        int a = int.Parse(entrada[0]);

        int b = int.Parse(entrada[1]);



        int q = a / b;

        int r = a % b;



        if (r < 0)

        {

            if (b > 0)

            {

                q -= 1;

                r += b;

            }

            else

            {

                q += 1;

                r -= b;

            }

        }



        Console.WriteLine($"{q} {r}");

    }

}

