#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    while (N--)
    {
        long long X;
        cin >> X;

        int maior = 0;
        int atual = 0;

        while (X > 0)
        {
            if (X & 1)
            {
                atual++;

                if (atual > maior)
                    maior = atual;
            }
            else
            {
                atual = 0;
            }

            X >>= 1;
        }

        cout << maior << endl;
    }

    return 0;
}