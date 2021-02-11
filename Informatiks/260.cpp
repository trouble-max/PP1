#include <iostream>

using namespace std;

int main(){

    int x, y, n;

    cin >> x >> y;

    if(x == 0 && y == 0) cout << "INF";

    else if(x == 0) cout << "NO";

    else if(y % x == 0){
        n = -y / x;

        cout << n;
    }

    else cout << "NO";


    return 0;
}