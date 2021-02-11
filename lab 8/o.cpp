#include <iostream>
#include <set>

using namespace std;

int main(){
    set<char> s;

    int count = 0;

    string x;

    cin >> x;

    for(int i = 0; i < x.size(); i++){
        if(x[i] >= 65 && x[i] <= 90) x[i] += 32;
    }

    for(int i = 0; i < x.size(); i++){
        s.insert(x[i]);
    }

    cout << s.size() << endl;

    set<char> :: iterator it;

    for(it = s.begin(); it != s.end(); it++){
        cout << *it << " ";
    }

    return 0;
}