#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> v;

    int n, x, y;

    bool check = false;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> x;
        v.push_back(x);
    }

    cin >> y;

    for(int i = 0; i < n; i++){
        if(v[i] == y) check = true;
    }

    if(check == true) cout << "Yes";
    else cout << "No";

    return 0;
}