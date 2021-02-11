#include <iostream>

using namespace std;

int Fn(int x){

    if(x == 1) return 0;
    if(x == 2) return 1;
    else return Fn(x - 1) + Fn(x - 2); 
}

int main(){

    int x;

    cin >> x;

    cout << Fn(x);

    return 0;
}