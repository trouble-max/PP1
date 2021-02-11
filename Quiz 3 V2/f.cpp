#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main(){
    set<string> s1;

    set<string> s2;

    set<string> :: iterator it;

    set<string> :: iterator jt;

    int n, m;

    string x;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> x;
        s1.insert(x);
    }

    cin >> m;

    for(int i = 0; i < m; i++){
        cin >> x;
        s2.insert(x);
    }

    cout << "Missed students:" << endl;

    for(it = s1.begin(); it != s1.end(); it++){
        if(count(s2.begin(), s2.end(), (*it)) == 0){
            cout << "- " << (*it) << endl;
        }
    }

    cout << "Not in the group:" << endl;

    for(it = s2.begin(); it != s2.end(); it++){
        if(count(s1.begin(), s1.end(), (*it)) == 0){
            cout << "- " << (*it) << endl;
        }
    }

    return 0;
}