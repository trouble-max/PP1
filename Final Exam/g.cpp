#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int x){
    if(x <= 1) return false; 

    for(int i = 2; i <= sqrt(x); i++){
        if(x % i == 0) return false;
    }

    return true;
}

void SoP(int n){
    for(int i = 0; i < n; i++){
        if(isPrime(i) && isPrime(n - i)){
            cout << i << " " << n - i;
            break;
        }
    }
}

int main(){
    int n;

    cin >> n;

    SoP(n);

    return 0;
}