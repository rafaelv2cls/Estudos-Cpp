#include <iostream>
using namespace std;

void primo(int m, int &p1, int &p2);

int main(){
    int n1, n2, n;

    cin >> n;

    primo(n, n1, n2);

    cout << n1 << endl << n2 << endl;
}

void primo(int m, int &p1, int &p2){
    int primo = 0;
    int i = m - 1;

    while(primo == 0){
        int j = 2;
        while((j < i) && (i % j != 0)) j++;
        if(j == i) primo = i;
        i--;
    }

    p1 = primo;

    primo = 0;
    i = m + 1;

    while(primo == 0){
        int j = 2;
        while((j < i) && (i % j != 0)) j++;
        if(j == i) primo = i;
        i++;
    }

    p2 = primo;
}