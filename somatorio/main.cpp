#include <iostream>
using namespace std;

int somatorio(int n);

int main(){
    int n;
    cin >> n;

    cout << somatorio(n) << endl;
    return 0;
}

int somatorio(int n){
    if(n <= 1){
        return n;
    }
    return n + somatorio(n - 1);
}