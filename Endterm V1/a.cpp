#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;

    cin >> n;

    vector<pair<int, int> > v;

    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        v.push_back(make_pair(min(x, y), max(x ,y)) );
        cout << count(v.begin(), v.begin() + i, v[i]) << endl;
    }

    return 0;
}