#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector< vector <int> > v( 8 , vector<int> (8, 0));

    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            v[i][j] = 0;
        }
    }

    int n, x, y;

    cin >> n;

    string a, b, c;

    vector<string> s;

    vector<string> :: iterator it;

    for(int i = 0; i < n; i++){
        cin >> c;
        s.push_back(c);
    }

    for(it = s.begin(); it != s.end(); it++){
        a = (*it);

        b = (*it);

        reverse(a.begin(), a.end());

        x = b[0] - 64;

        y = a[0] - 48;

        v[x - 1][y - 1] = 1;
    }

    for (int i = 0; i < v.size(); i++){
        for (int j = 0; j < v[i].size(); j++){
            if(v[i][j] != 0) cout << "*";
            else cout << 0;
        } cout << endl;
    } 

    return 0;
}