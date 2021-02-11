#include <iostream>

using namespace std;

int main(){

    int n;

    bool check = true;

    cin >> n;

    int a[n][n];

    for(int i =0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    
    for(int i =0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] != a[j][i]) check = false;
        }
    }

    if (check == true) cout << "yes";

    else cout << "no";

    return 0;
}