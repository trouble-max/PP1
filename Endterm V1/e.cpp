#include <iostream>

using namespace std;

int main(){
    int x, a, b, c, d;

    cin >> x;

    while(true){
        x++;
        a = x / 1000;
        b = x / 100 % 10;
        c = x / 10 % 10;
        d = x % 10;
        if(a != b && a != c && a != d && b != c && b != d && c != d) break;
    }

    cout << x;

    return 0;
}