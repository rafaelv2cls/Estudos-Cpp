#include <iostream>
using namespace std;

int dobro(int k);

int main(){
    int a;
    cin >> a;

    cout << dobro(a) << endl;

return 0;
}

int dobro(int k){
    return k*2;
}