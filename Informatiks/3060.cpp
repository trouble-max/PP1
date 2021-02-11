#include <iostream>

using namespace std;

int main(){

    int x;

    cin >> x;

    if(x == 1) cout << "YES";

    else if(x % 2 == 0){
        while(x % 2 == 0){
        x = x / 2;
        }

    if(x == 1) cout << "YES";

    else cout << "NO";
    }
    else cout << "NO";

    return 0;
}