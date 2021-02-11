#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main(){
    int x, n, m;

    cin >> n;

    vector<int> v1;

    queue<int> q;

    for(int i = 0; i < n; i++){
        cin >> x;
        v1.push_back(x);
    }

    cin >> m;

    for(int i = 0; i < m; i++){
        cin >> x;
        q.push(x);
        
    }

    while(!q.empty()){
        cout << count(v1.begin() ,v1.end() , q.front()) << endl;
        q.pop();
    }

    return 0;
}