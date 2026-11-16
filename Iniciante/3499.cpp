#include <iostream>
using namespace std;

int main()
{
    int biscoitos = 0;
    
    scanf("%d", &biscoitos);
    
    if(biscoitos <= 3)
    cout << "vai ganhar o biscoito" << endl;
    else
    cout << "vai ficar sem o biscoito" << endl;
    
    return 0;
}