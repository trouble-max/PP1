#include <iostream>

using namespace std;

int Fct(int x){

    if(x == 0) return 1;

    else return Fct(x - 1) * x;
}

int main(){

    int x;

    cin >> x;

    cout << Fct(x);

    return 0;
}