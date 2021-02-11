#include <iostream>

using namespace std;

int main(){

    int n, m, x, y, max;

    max = -1;

    cin >> n >> m;

    int a[n][m], b[n * m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] > max){
                max = a[i][j];
                x = i;
                y = j;
            }
        }
    }

    cout << max << endl;

    cout << x << " " << y;

    return 0;
}