#include <iostream>
#include <algorithm>

using namespace std;

int Boss(string s){
    if(s == "") return -1;
    if(s[0] >= 65 && s[0] <= 90) return s[0];
    else{
        reverse(s.begin(), s.end());
        s.pop_back();
        reverse(s.begin(), s.end());
        return Boss(s);
    }
}

int main(){
    string s;

    int x;

    cin >> s;

    char c;

    x = Boss(s);

    if(x == -1) cout << x;
    else{
        c = x;
        cout << c;
    }

    return 0;
}