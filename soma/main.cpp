#include <iostream>
using namespace std;

int somar(int a, int b);

int multiplicar(int a, int b);

int main(){
    int a = 2, b = 6;

    cout << somar(a,b) << endl;
    cout << multiplicar(a,b) << endl;

return 0;
}

int somar(int a, int b) {
    return a+b;
}

int multiplicar(int a, int b){
    return a*b;
}