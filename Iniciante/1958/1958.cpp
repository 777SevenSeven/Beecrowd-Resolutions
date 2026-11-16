#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double X;
    cin >> X;

    cout << uppercase << showpos << scientific << setprecision(4);
    cout << X << endl;

    return 0;
}
