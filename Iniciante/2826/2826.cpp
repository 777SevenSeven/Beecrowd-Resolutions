#include <iostream>
#include <string>

using namespace std;

int main() {
    string A, B;

    cin >> A;
    cin >> B;

    if (A < B) {
        cout << A << endl;
        cout << B << endl;
    } else {
        cout << B << endl;
        cout << A << endl;
    }

    return 0;
}