#include <iostream>
#include <cmath>

using namespace std;

int check = 0;

bool Cheat(int *a, int n, int x, int j){

    if(j == n){
        return false;
    }
    for(int i = 0; i < n; i++){
        if(abs(a[i] - a[j]) <= x){
            check = 1;
            break;
        }
    }
    if(check == 1) return true;
    if(check == 0){
        j++;
        return Cheat(a, n, x, j);
    }
}

int main(){

    int n, x, j = 0;

    cin >> n >> x;

    int a[n];

    for(int i = 0; i < n; i++) cin >> a[i];

    if(Cheat(a, n, x, j) == true) cout << "cheater";
    else cout << "no";

    return 0;
}