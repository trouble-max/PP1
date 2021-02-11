#include <iostream>
#include <cmath>

using namespace std;

int n = 1, count = 0; 

bool IsPrime(int x){
    if(x <= 1) return false; 

    for(int i = 2; i <= sqrt(x); i++){
        if(x % i == 0) return false;
    }

    return true;
}

int nthPrime(int x){
    while(count < x){
        if(IsPrime(n++) == true){
            count++;
        }
    }
    return n - 1;
}

int main(){
    int x;

    cin >> x;

    cout << nthPrime(x);

    return 0;
}