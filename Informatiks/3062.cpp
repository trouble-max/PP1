#include <iostream>

using namespace std;

int main(){

    double x;

    int y, count = 0;

    cin >> x >> y;

    while(x < y){
        x = x + 0.1 * x;
        count++;
    }

    cout << count + 1;

    return 0;
}