#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n;

    cin >> n;

    vector<string> vs(n);
    vector<int> vi(n);

    for(int i = 0; i < n; i++){
        cin >> vs[i] >> vi[i];
    }

    sort(vs.begin(), vs.end());
    sort(vi.begin(), vi.end());

    for(int i = 0; i < n; i++){
        cout << vs[i] << " " << vi[i] << endl;
    }

    return 0;
}