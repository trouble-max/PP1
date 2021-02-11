#include <iostream>
#include <map>
#include <set>

using namespace std;

int main(){
    int n, m;

    string in;

    multimap<string, string> m2;

    set<string> s, m1;

    cin >> n;

    for(int i = 0; i < n; i++){
        string x;
        cin >> x;
        m1.insert(x);
    }

    cin >> m;

    for(int i = 0; i < m; i++){
        string x, y;
        cin >> x >> y;
        m2.insert(make_pair(x, y));
    }

    cin >> in;

    for(multimap<string, string> :: iterator it = m2.begin(); it != m2.end(); it++){
        if(it->first == in) s.insert(it->second);
        if(it->second == in) s.insert(it->first);
    }

    if(s.size() == 0) cout << "0";
    else{
        cout << s.size() << endl;
        for(set<string> :: iterator it = s.begin(); it != s.end(); it++){
            cout << *it << " ";
        }
    }

    return 0;
}