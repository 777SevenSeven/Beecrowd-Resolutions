#include <iostream>
#include <string>
using namespace std;

int main() {
    int C;
    cin >> C;

    string musicas[] = {
        "PROXYCITY",
        "P.Y.N.G.",
        "DNSUEY!",
        "SERVERS",
        "HOST!",
        "CRIPTONIZE",
        "OFFLINE DAY",
        "SALT",
        "ANSWER!",
        "RAR?",
        "WIFI ANTENNAS"
    };

    while (C--) {
        int X, Y;
        cin >> X >> Y;
        
        cout << musicas[X + Y] << endl;
    }

    return 0;
}