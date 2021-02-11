#include <iostream>

using namespace std;

bool pow2(long long int n){
    if(n == 1) return true;
    if(n % 2 == 1) return false;
    else return pow2(n / 2);
}

int main(){
    
    long long int n;

    cin >> n;

    if(pow2(n) == true) cout << "Yes";
    else cout << "No";

    return 0;
}