#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main(){
    vector<int> v1, v2;

    set<int> s;

    bool check = false;

    int n, m;

    cin >> n;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v1.push_back(x);
    }

    cin >> m;

    for(int i = 0; i < m; i++){
        int x;
        cin >> x;
        v2.push_back(x);
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i != j) s.insert(v1[i] + v1[j]);
        }
    }

    for(int i = 0; i < m; i++){
        if(binary_search(s.begin(), s.end(), v2[i])) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
            
    return 0;
}