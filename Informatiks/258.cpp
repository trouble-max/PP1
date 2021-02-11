#include <iostream>

using namespace std;

int main(){

    int x, y, n;

    cin >> x >> y >> n;

    if(n < x * y && ( (n % x == 0) || (n % y == 0) )) cout << "YES";

    else cout << "NO";

    return 0;
}