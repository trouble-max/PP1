#include <iostream>

using namespace std;

bool search(int *a, int l, int r, int x){
    
    if(l == r){
        if(a[l] == x) return true;
        else return false;
    }

    int m = (l + r) / 2;

    if(a[m] < x) return search(a, m + 1, r, x);

    else return search(a, l, m, x);
}

int main(){

    int n, x;

    cin >> n;

    int a[n];

    for(int i = 0; i < n; i++) cin >> a[i];

    cin >> x;

    if(search(a, 0, n, x) == true) cout << "Yes";
    else cout << "No";

    return 0;
}