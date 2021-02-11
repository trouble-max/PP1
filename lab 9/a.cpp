#include <iostream>
#include <map>
#include <set>

using namespace std;

int main(){
    multiset< pair<int, int> > mm;

    int n;

    cin >> n;

    int x, y;

    for(int i = 0; i < n; i++){
        cin >> x;
        cin >> y;
        mm.insert(make_pair(x, y));
    }

    set< pair<int, int> > :: iterator it;

    for(it = mm.begin(); it != mm.end(); it++){
        cout << (*it).first << " " << (*it).second << endl;
    }
    
    return 0;
}