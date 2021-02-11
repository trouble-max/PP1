#include <iostream>
#include <set>

using namespace std;

int main(){
    multiset<int> ms;

    multiset<int> :: iterator it;

    int n, m;

    cin >> n;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        ms.insert(x);
    }

    cin >> m;

    for(int i = 0; i < m; i++){
        int x;
        cin >> x;
        ms.insert(x);
    }

    for(it = ms.begin(); it != ms.end(); it++){
        cout << (*it) << " ";
    }

    return 0;
}