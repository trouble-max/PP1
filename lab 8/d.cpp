#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> v;

    int n, x, y;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> x;
        v.push_back(x);
    }

    cin >> y;

    v.erase(v.begin() + y);

    for(int i = 0; i < n - 1; i++) cout << v[i] << " ";

    return 0;
}