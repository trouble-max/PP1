#include <iostream>

using namespace std;

int main() {

    int a[26]{0};

    string s;

    cin >> s;

    for(int i = 0; i < s.size(); i++){

        if(a[s[i] - 97] == 1) cout << s[i];

        else a[s[i] - 97] = 1;
    }

    return 0;
}