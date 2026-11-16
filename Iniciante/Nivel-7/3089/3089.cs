/*
 * Beecrowd | 3089 - Presentes de Natal
 * Categoria: Iniciante | Nível 7 | Assunto: Desconhecido
 * Link: https://judge.beecrowd.com/pt/problems/view/3089
 */



using System;

using System.Collections.Generic;



class Program

{

    static void Main()

    {

        List<long> dados = new List<long>();

        string linha;



        while ((linha = Console.ReadLine()) != null)

        {

            string[] partes = linha.Split(

                new char[] { ' ', '\t' },

                StringSplitOptions.RemoveEmptyEntries

            );



            foreach (string parte in partes)

                dados.Add(long.Parse(parte));

        }



        int indice = 0;



        while (indice < dados.Count)

        {

            int n = (int)dados[indice++];



            if (n == 0)

                break;



            long[] presentes = new long[2 * n];



            for (int i = 0; i < 2 * n; i++)

                presentes[i] = dados[indice++];



            long maior = long.MinValue;

            long menor = long.MaxValue;



            for (int i = 0; i < n; i++)

            {

                long soma = presentes[i] + presentes[2 * n - 1 - i];



                if (soma > maior)

                    maior = soma;



                if (soma < menor)

                    menor = soma;

            }



            Console.WriteLine(maior + " " + menor);

        }

    }

}

