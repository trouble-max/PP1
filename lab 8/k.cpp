#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    vector<int> v;

    int n, x, y, count = 0;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> x;
        v.push_back(x);
    }

    cin >> y;

    sort(v.begin(), v.end());

    reverse(v.begin(), v.end());

    for(int i = 0; i < y; i++) count += v[i];

    cout << count;

    return 0;
}