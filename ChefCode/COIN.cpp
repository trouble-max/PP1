#include <iostream>

using namespace std;

int main(){

    int a[10]{0};

    int y = 0;

    for(int i = 0; i < 10; i++) cin >> a[i];

    for(int i = 0; i < 10; i++){
        if(a[i] != 0){
            y = a[i] / 2 + a[i] / 3 + a[i] / 4;
            cout << y << endl;
            y = 0;
        }
    }

    return 0;
}