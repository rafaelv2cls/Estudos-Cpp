#include <iostream>
#include <string>

using namespace std;

int main() {
    float notas1[10], notas2[10];
    int i = 0, maior = 0, menor = 0;
    string aluno[10];

    cout << "Digite o nome e as duas notas de 10 alunos:\n";
    while (i < 10) {
        cout << "Aluno " << i + 1 << ": " << endl;
        cin >> aluno[i] >> notas1[i] >> notas2[i];

        float media = (notas1[i] + notas2[i]) / 2.0f;
        notas1[i] = media;

        if (notas1[i] > notas1[maior]) maior = i;
        if (notas1[i] < notas1[menor]) menor = i;
        i++;
    }

    i = 0;
    while (i < 10) {
        if (notas1[i] < 5) cout << aluno[i] << " foi reprovado." << endl;
        else if (notas1[i] < 6) cout << aluno[i] << " está de recuperação." << endl;
        else cout << aluno[i] << " foi aprovado." << endl;
        i++;
    }

    cout << "Maior Média: " << aluno[maior] << " com nota " << notas1[maior] << "." << endl;

    cout << "Menor Média: " << aluno[menor] << " com nota " << notas1[menor] << "." << endl;

    return 0;
}