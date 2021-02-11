#include <iostream>
#include <map>
#include <sstream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n;

    cin >> n;

    vector<pair<int, int> > m;

    for(int i = 0; i < n; i++){
        int x, y, a = 0, b, c = 0;
        cin >> x >> y;
        while(x != 0){
            b = x % 10;
            a = a * 10 + b;
            x /= 10;
        }
        while(y != 0){
            b = y % 10;
            c = c * 10 + b;
            y /= 10;
        }
        m.push_back(make_pair(a, c));
    }

    vector<int> v;

    for(int i = 0; i < m.size(); i++){
        int x, a = 0, b;
        x = m[i].first + m[i].second;
        while(x != 0){
            b = x % 10;
            a = a * 10 + b;
            x /= 10;
        }
        v.push_back(a);
    }

    for(int i = 0; i < v.size(); i++) cout << v[i] << endl;

    return 0;
}