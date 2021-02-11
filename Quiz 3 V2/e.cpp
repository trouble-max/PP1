#include <iostream>
#include <cmath>

using namespace std;

int F(int x){

    if(x == 1) return 1;
    else{
    int k = 1, n = 0, y;

    while(k != x){
        if(x % k == 0){
            n++;
            y = k;
        } k++;
    }

    return F(y) + n;
    } 
}

int main(){

    int x, k;

    cin >> x;

    cout << F(x);

    return 0;
}