#include <iostream>
#include <climits>

using namespace std;

int main(){

    int a[2147483646];

    for(int i = 0; i < a.size(); i++){
        cin >> a[i];

        if(a[i] == 42) break;

        else cout << a[i];
    }

    return 0;
}