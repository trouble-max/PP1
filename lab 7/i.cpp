#include <iostream>

using namespace std;

int UZS(int x, int sum){
    cin >> x;
    if(x == 0) return sum;
    else{
        sum += x;
        return UZS(x, sum);
    }
}

int main(){

    int x, sum = 0;

    cout << UZS(x, sum);

    return 0;
}