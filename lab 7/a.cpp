#include <iostream>

using namespace std;

int pow(int n){
    if(n == 0) return 1;
    return pow(n - 1) * 2;
}

int main(){
    
    int n;

    cin >> n;

    cout << pow(n);

    return 0;
}