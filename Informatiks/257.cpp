#include <iostream>
#include <cmath>

using namespace std;

int main(){
    
    int x, y, z, w;

    cin >> x >> y >> z >> w;

    if((abs(x - z) == 1 && abs(y - w) == 2) || (abs(y - w) == 1 && abs(x - z) == 2)) cout << "YES";

    else cout << "NO";

    return 0;
}