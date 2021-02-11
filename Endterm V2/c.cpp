#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int x){
    if(x < 2) return false;
    for(int i = 2; i <= sqrt(x); i++){
        if(x % i == 0) return false;
    }
    return true;
}

int nthPrime(int x){
    int y = 0;
    for(int i = 0; y <= x; i++){
        if(isPrime(i)){
            y++;
            if(x == y) return i;
        }
    }
    return 0;
}

int main(){
    int n;

    cin >> n;

    cout << nthPrime(nthPrime(n));

    return 0;
}