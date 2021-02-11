#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main(){
    int x, n, m, count = 0;

    cin >> n;

    vector<int> v1;

    multimap<int, int> q;

    multimap<int, int> :: iterator it;

    for(int i = 0; i < n; i++){
        cin >> x;
        v1.push_back(x);
    }

    cin >> m;

    for(int i = 0; i < m; i++){
        cin >> x;
        for(int j = 0; j < n; j++){
            if(x == v1[j]) count++;
        }
        q.insert(make_pair(x, count));
        count = 0;
        for(it = q.begin() + i; it != q.end(); it++){
        cout << (*it).second << endl;
    }
    
    }

    

    return 0;
}