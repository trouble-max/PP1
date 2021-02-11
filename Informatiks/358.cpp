#include <iostream>

using namespace std;

int main(){

    int n, m, max, y;

    max = -1;

    cin >> n >> m;

    int a[n][m], b[n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    
    for(int i = 0; i < n; i++){
            b[i] = 0;
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            b[i] = b[i] + a[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] > max){
                max = a[i][j];
                y = i;
            }
            else if(a[i][j] == max){
                if(b[y] < b[i]){
                    max = a[i][j];
                    y = i;
                }
            }
        }
    }

    cout << y;

    return 0;
}