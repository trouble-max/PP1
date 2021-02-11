#include <iostream>
#include <algorithm>

using namespace std;

int a[10000];

int b[10000];

int c[101];

int d[101];

int n, x, y;

int cont;

void NoE(){

    for(int i = 0; i < n; i++){
        x = a[i];

        c[x] = c[x] + 1;
    }

    for(int i = 0; i < n; i++){
        y = b[i];

        d[y] = d[y] + 1;
    }

    for(int i = 0; i < 101; i++){
        if(min(c[i],d[i]) != 0) cont = cont + min(c[i],d[i]);
    }
}

void inp(){

    cin >> n;

    for(int i = 0; i < n; i++) cin >> a[i];

    for(int i = 0; i < n; i++) cin >> b[i];

    for(int i = 0; i < 101; i++) c[i] = 0;

    for(int i = 0; i < 101; i++) d[i] = 0;
}

int main(){

    inp();

    NoE();

    cout << cont;

    return 0;
}