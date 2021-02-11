#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> v1, v2;

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

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            for(int k = 0; k < n; k++){
                if(v2[i] == v1[j] + v1[k] && j != k) {
                    check = true;
                    break;
                }
            }
            if(check == true) break;
        }
        if(check == true) cout << "YES" << endl;
        else cout << "NO" << endl;
        check = false;
    }

    return 0;
}