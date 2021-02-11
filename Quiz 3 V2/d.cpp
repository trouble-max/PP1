#include <iostream>
#include <cmath>

using namespace std;

int Fn(int x, int k){

    if(x == 1) return 0;
    if(x == 2) return 1;
    else return (Fn(x - 1, k) * k + Fn(x - 2, k)) % 10; 
}

int main(){

    int x, k;

    cin >> k >> x;

    cout << Fn(x, k);

    return 0;
}