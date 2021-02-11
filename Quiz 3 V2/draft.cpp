#include <iostream>
#include <map>

using namespace std;

int main(){

    map<string, int> m;

    string s;

    cin >> s;

    int b;

    cin >> b;

    m.insert(make_pair(s, b));
    m.insert(make_pair("apple", 3));

    map<string, int> :: iterator it;

    for(it = m.begin(); it != m.end(); it++){
        cout << (*it).first << " " << (*it).second;
    }

    return 0;
}