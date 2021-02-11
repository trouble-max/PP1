#include <iostream>
#include <cmath>

using namespace std;

bool IsPrime(int x){
    if(x <= 1) return false; 

    for(int i = 2; i <= sqrt(x); i++){
        if(x % i == 0) return false;
    }

    return true;
}

void PrimeFactors(int x){
        for(int i = 2; i <= sqrt(x); i++){

            while(x % i == 0){
                cout << i << " ";
                x = x / i;
            }
        }
    if(x > 2) cout << x << " ";
}

int main(){
    int x;

    cin >> x;

    PrimeFactors(x);

    return 0;
}