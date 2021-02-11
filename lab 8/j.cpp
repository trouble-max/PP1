#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    vector<int> v;

    int n, x;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    cout << v[n - 1] - v[0];

    return 0;
}