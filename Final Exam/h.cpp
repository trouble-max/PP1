#include <iostream>

using namespace std;

int main(){
    string s, s1, t, t1, t2, result;

    cin >> s >> t;

    for(int i = 0; i < s.size(); i++){
        s1.push_back(toupper(s[i]));
    }

    for(int i = 0; ;i++){
        if(i == t.size()) i = 0;
        if(t1.size() == s1.size()) break;
        t1.push_back(t[i]);
    }

    for(int i = 0; i < t1.size(); i++){
        t2.push_back(toupper(t1[i]));
    }

    for(int i = 0; i < s1.size(); i++){
        char c;
        c = (s1[i] + t2[i]) % 26;
        c += 'a';
        result.push_back(c);
    }

    cout << result;

    return 0;
}