#include <iostream>
using namespace std;
 
int main() {
    
    string alfabeto = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char L;
 
    cin >> L;
    
    size_t posicao = alfabeto.find(L);
    
    cout << posicao + 1 << endl;
 
    return 0;
}