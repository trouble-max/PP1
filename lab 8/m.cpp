#include <iostream>
#include <set>

using namespace std;

int main(){
    set<int> s;

    int n, x, count = 0;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> x;
        s.insert(x);
    }

    set<int> :: iterator it;

    for(it = s.begin(); it != s.end(); it++){
        count += *it;
    }

    cout << count;

    return 0;
}