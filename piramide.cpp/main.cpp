#include <iostream>

using namespace std;
int main() {
    int coluna, linha = 0, tamanho;
    cin >> tamanho;

    while (linha < tamanho) {
        coluna = 0;
        while (coluna < linha + 1) {
            if (((coluna + 1) % 2) == 0) {
                cout << "#";
            }
            else {
                cout << "@";
            }
            coluna++;
        }
        cout << endl;
        linha++;
    }
    return 0;
}