#include <iostream>

using namespace std;

int main(){

    int x, i, cont = 0;

    cin >> x;

    i = 1;

    if(x == 0 || x == 1) cout << "0";

    else{
        do{
        i = i * 2;
        cont++;
        } while(i < x);
    }

    cout << cont;

    return 0;
}