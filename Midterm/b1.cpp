#include <bits/stdc++.h>

using namespace std;     

int main(){

    int n;

    cin >> n;

    int a[n][n];

    for(int i = 0; i < n; i++){

        for(int j = 0; j < n; j++){

            cin >> a[i][j];
        }
    }

    for(int i = n - 1; i >= -n + 1; i--){

        for(int j = 0; j < n; j++){

            if(j + i < n && j + i >= 0) cout << a[j][j + i] << " ";
        }
        
        cout << endl;
    }

    return 0;
}