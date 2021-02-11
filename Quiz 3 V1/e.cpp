#include <iostream>
#include <set>

using namespace std;

int main(){
    int n, x;

    cin >> n;

    set<int> s;

    set<int> :: iterator it;

    for(int i = 0; i < n; i++){
        cin >> x;
        s.insert(x);
    }

    if(n == s.size()) cout << "YES";
    else cout << "NO";

    return 0;
}