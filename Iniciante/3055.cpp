#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
 
    int A = 0, P2 = 0, M = 0;
    
    cin >> A;
    cin >> M;
    
    P2 = (M * 2) - A;
 
    cout << abs(P2) << endl;
    
    return 0;
}