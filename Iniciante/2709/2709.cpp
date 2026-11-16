#include <iostream>
using namespace std;

int main()
{
    int M;
    
    //Entrada de Dados
    while(cin >> M) { //Tratar EOF's

        int moedas[20];

        for(int i = 0; i < M; i++) {
            cin >> moedas[i];
        }

        int N;
        cin >> N;

        int soma = 0;
        
    //Desenvolvimento de Dados
        for(int i = M - 1; i >= 0; i -= N) { //Enquanto tiver moedas pra ler, eu vou. (E seguindo a regra das puladas de moedas que a Glória der (N))
            soma += moedas[i];
        }
    //Verificação se é primo
        bool primo = true;

        if(soma < 2) {
            primo = false;
        }

        for(int i = 2; i < soma; i++) {
            if(soma % i == 0) {
                primo = false;
                break;
            }
        }
        
    //Saída de Dados
        if(primo) {
            cout << "You’re a coastal aircraft, Robbie, a large silver aircraft." << endl;
        } else {
            cout << "Bad boy! I’ll hit you." << endl;
        }
    }

    return 0;
}