#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> v;

    int n, x, y, z;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> x;
        v.push_back(x);
    }

    cin >> y >> z;

    v.insert(v.begin() + y, z);

    for(int i = 0; i < n + 1; i++) cout << v[i] << " ";

    return 0;
}