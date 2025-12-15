#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream arquivo("votos.txt");
    int voto, X1 = 0, X2 = 0, X3 = 0, X4 = 0, N = 0, B = 0, total = 0;

    while (arquivo >> voto) {
        switch (voto)
        {
        case 1:
            X1++;
            break;
        case 2:
            X2++;
            break;
        case 3:
            X3++;
            break;
        case 4:
            X4++;
            break;
        case 5:
            N++;
            break;
        case 6:
            B++;
            break;
        }
        total++;
    }

    cout << "1: " << X1 << " " << float(X1) / float(total) << endl;
    cout << "2: " << X2 << " " << float(X2) / float(total) << endl;
    cout << "3: " << X3 << " " << float(X3) / float(total) << endl;
    cout << "4: " << X4 << " " << float(X4) / float(total) << endl;
    cout << "5: " << N << " " << float(N) / float(total) << endl;
    cout << "6: " << B << " " << float(B) / float(total) << endl;
    cout << "7: " << X1 + X2 + X3 + X4 << " " << float(X1 + X2 + X3 + X4) / float(total) << endl;
    return 0;
}