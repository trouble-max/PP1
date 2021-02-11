#include <iostream>

using namespace std;

int main(){

    int n, m, max, y;

    max = -1;

    cin >> n >> m;

    int a[n][m], b[n * m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < n * m; i++){
            b[i] = 0;
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            b[i] = b[i] + a[i][j];
        }
    }

    for(int i = 0; i < n * m; i++){
        if(b[i] > max){
            max = b[i];

            y = i;
        }
    }

    cout << max << endl;

    cout << y;

    return 0;
}