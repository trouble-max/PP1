#include <iostream>
#include <queue>
#include <algorithm>
#include <stack>
#include <set>
#include <vector>
#include <map>

using namespace std;

bool Pol(string a){
    bool check = true;
    for(int i = 0; i < a.size(); i++){
        if(a[i] != a[a.size() - 1 - i]) check = false;
    }
    if(check) return true;
    else return false;
}

int main(){
    /*queue<char> q;

    string s;

    vector<char> v;

    cin >> s;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == '0'){
            v.push_back('0');
            q.pop();
        }
        if(s[i] == '1'){
            if(q.front() == '1'){
                q.pop();
                v.pop_back();
            }
            else{
                q.push('1');
                v.push_back('1');
            }
        }
    }

    for(int i = 0; i < v.size(); i++) cout << v[i];*/

    /*map<string, int> m;

    map<string, int> :: iterator it;

    int n; cin >> n;

    double z;

    for(int i = 0; i < n; i++){
        string x;
        int y;
        cin >> x >> y;
        m[x] += y;
        z += y;
    }

    for(it = m.begin(); it != m.end(); it++){
        cout << it->first << " " << ((it->second) / z) * 100 << "%" << endl;
    }*/

    string a; cin >> a;

    int x = 0;

    sort(a.begin(), a.end());

    do{
    if(Pol(a)) x++;
    }while (next_permutation(a.begin(), a.end() ) );

    if(x != 0) cout << "ZA WARUDO TOKI WO TOMARE";
    else cout << "JOJO";

    return 0;
}