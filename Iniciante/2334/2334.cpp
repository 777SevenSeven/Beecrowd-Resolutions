#include <iostream>
#include <string>

using namespace std;

int main() {
    string p;
    
    while (cin >> p) {
        if (p == "-1")
            break;
        
        if (p == "0") {
            cout << "0" << endl;
            continue;
        }
        
        int i = p.size() - 1;
        
        while (i >= 0) {
            if (p[i] > '0') {
                p[i]--;
                break;
            } else {
                p[i] = '9';
                i--;
            }
        }
        
        // Remove zeros à esquerda
        if (p[0] == '0' && p.size() > 1)
            p.erase(0, 1);
        
        cout << p << endl;
    }
    
    return 0;
}