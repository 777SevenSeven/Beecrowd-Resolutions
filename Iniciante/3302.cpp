#include <iostream>
using namespace std;

int main() {
    int casosTeste = 0, i = 1, num = 0;
    
    cin >> casosTeste;
    
    for(i = 1; i <= casosTeste; i++) {
        cin >> num;
        cout << "resposta " << i << ": " << num << endl; 
    }
 
    return 0;
}