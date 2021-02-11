#include <iostream>

using namespace std;

int add(int x, int y){
    int z;

    z = x + y;

    return z;
}

int main(){
    int a, b;

    cin >> a >> b;

    cout << add(a,b);

    return 0;
}