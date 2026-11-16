#include <iostream>
using namespace std;
 
int main() {
 
   int Anoes = 0, Elfos = 0, Humanos = 0, Magos = 0, Hobbits = 0, quantidadeTeste = 0;
   string nome;
   char classe;
   
   cin >> quantidadeTeste;
   
   for(int i = 0; i < quantidadeTeste; i++) {
       cin >> nome >> classe;
       if(classe == 'X') {
           Hobbits++;
       } else if(classe == 'M') {
           Magos++;
       } else if(classe == 'H') {
           Humanos++;
       } else if(classe == 'E') {
           Elfos++;
       } else {
           Anoes++;
       }
   }
   
   cout << Hobbits << " Hobbit(s)" << endl;
   cout << Humanos << " Humano(s)" << endl;
   cout << Elfos << " Elfo(s)" << endl;
   cout << Anoes << " Anao(oes)" << endl;
   cout << Magos << " Mago(s)" << endl;
   
    return 0;
}