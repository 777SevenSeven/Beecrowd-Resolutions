#include <iostream>
using namespace std;

int main()
{
    int letra = 97;

    for (int i = 0; i < 26; i++)
    {
        cout << letra << " e " << char(letra) << endl;
        letra++;
    }

    return 0;
}