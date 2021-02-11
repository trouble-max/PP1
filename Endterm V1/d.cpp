#include <iostream>

using namespace std;

int main(){
    string s, r;

    int x = 0;

    cin >> s >> r;

    for(int i = 0; i < s.size() - r.size() + 1; i++){
        for(int j = 0; j < r.size(); j++){
            if(s[i + j] == r[j]) x++;
        }
        if(x == r.size()) cout << i << " ";
        x = 0;
    }

    return 0;
}