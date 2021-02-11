#include <iostream>

using namespace std;

int main(){

    int x, n, max = 0;

    int a[1000]{0};

    cin >> n;

    for(int i = 0; i < n; i++){

        cin >> x;

        a[x - 1]++;

    }
    for(int i = 0; i < 1000; i++){

        if(a[max] < a[i])max = i;
    }

    for(int i = 999; i >= 0; i--){

        if(a[i] == a[max]){

        cout << i + 1 << ' ';
        }
    }

    return 0;
}