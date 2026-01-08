#include <iostream>
#include <string>
using namespace std;

string prefixo(string p, int n);
string sufixo(string p, int n);

int main(){
	string palavra;
	char opcao;
	int qnt;
	cout << "Digite a palavra:" << endl;
	cin >> palavra;
	cout << "Digite S para sufixo ou P para prefixo:" << endl;
	cin >> opcao;
	cout << "Com quantas letras a operação deve ser feita?" << endl;
	cin >> qnt;

	switch(opcao){
		case 'P':
			cout << prefixo(palavra, qnt) << endl;
			break;
		case 'S':
			cout << sufixo(palavra, qnt) << endl;
			break;
		default:
			cout << "Inserção Inválida" << endl;
	}
return 0;
}

string prefixo(string p, int n){
	if (n <= 3) {
		string b = "";
		int i = 0;
		while(i < n && i < p.size()){
			b += p[i];
			i++;
		}
	return b;
	} else {
		cout << "Tamanho de prefixo inválido." << endl;
		return "";
	}
}

string sufixo(string p, int n){
	if (n <= 3 && n < p.size()){
		string b = "";
		int tam = p.size();
		int i = tam - n;

		while(i < tam){
			b += p[i];
			i++;
		}
	return b;
	} else {
		cout << "Tamanho de sufixo inválido." << endl;
		return "";
	}
}
