#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

bool sortbysecdesc(const pair<string,int> &a, const pair<string,int> &b){
    return a.second > b.second;
}

int main(){
    int x = 0;

    vector<pair<string, int> > v;

    string s, u;

    map<string, int> m;

    map<string, int> :: iterator it;

    getline(cin, s);

    istringstream input(s);

    while (input >> u){
        m[u]++;
    }

    for(it = m.begin(); it != m.end(); it++){
        v.push_back(make_pair(it->first, it->second));
    }

    sort(v.begin(), v.end(), sortbysecdesc);

    for(int i = 0; i < v.size(); i++){
        cout << v[i].first << " : " << v[i].second << endl;
    }

    return 0;
}