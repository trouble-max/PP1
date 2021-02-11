#include <iostream>
#include <math.h>

using namespace std;

int a[10000];

int b[10000];

int n;

void diff(){

    for(int i = 0; i < n; i++){
        a[i] = abs(a[i] - b[i]);
    }
}

void inp(){

    cin >> n;

    for(int i = 0; i < n; i++) cin >> a[i];

    for(int i = 0; i < n; i++) cin >> b[i];
}

int main(){

    inp();

    diff();

    for(int i = 0; i < n; i++) cout << a[i] << " ";

    return 0;
}