
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
