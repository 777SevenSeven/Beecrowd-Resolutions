#include <iostream>
using namespace std;
 
int main() {
    
    int casosTeste = 0;
    string pergunta, resposta = {"I am Toorg!"};
    
   cin >> casosTeste;
   
   for(int i = 0; i < casosTeste; i++) {
       cin >> pergunta;
       cout << resposta << endl;
   }
 
    return 0;
}